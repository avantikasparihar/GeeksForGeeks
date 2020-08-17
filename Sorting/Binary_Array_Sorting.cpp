// binArray is an array that consists only 0s and 1s
// return sorted binary array 

vector<int> SortBinaryArray(vector<int> binArray)
{
    // only gravity will pull me down

    // Binary Array Sorting

    int lo = 0, hi = binArray.size()-1;    // Two pointers
    while(lo < hi) {
        if (binArray[lo] == 1 && binArray[hi] == 0) {
            swap(binArray[lo], binArray[hi]);
            lo++;
            hi--;
        }
        if (binArray[lo] == 0)
            lo++;
        if (binArray[hi] == 1)
            hi--;
    }
    return binArray;
}