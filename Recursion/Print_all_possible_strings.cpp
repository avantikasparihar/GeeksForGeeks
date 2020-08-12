/*You have to complete this function*/
void recursion(char str[], string result, int i, int sz) {
    if (i == sz-1) {    // base case at sz-1 because we don't want space after the last char of str
        result += str[i];    // append last char and then print
        cout << result << "$";
        return;
    }
    result += str[i];    // the resulting string must always begin with the first char and not space
    recursion(str, result, i+1, sz);
    result += " ";
    recursion(str, result, i+1, sz);
}

void  printSpace(char str[])
{
// only gravity will pull me down

// Print all possible strings

int sz = 0;
while(str[sz] != '\0')    // donot use sizeof() to find the size of the array of char
    sz++;
string res = "";    // prefer string over char[]
recursion(str, res, 0, sz);
}