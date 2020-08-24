/*
Structure of the node of Huffman tree is as
struct MinHeapNode
{
	char data;
	int freq;
	MinHeapNode *left, *right;
};
*/
// task is to complete this function
// function should return decoded string from 
// the given bianry encoded string
string decodeHuffmanData(struct MinHeapNode* root, string binaryString)
{
    // only gravity will pull me down

    // Huffman Decoding
    
    string res="";
    MinHeapNode* temp = root;
    for(int i=0; i<binaryString.size(); i++) {
        if(binaryString[i] == '0')
            temp = temp->left;
        else
            temp = temp->right;
        if(temp->left==NULL && temp->right==NULL) {
            res += temp->data;
            temp = root;
        }
    }
    return res;
}