// The main function that sort the given string arr[] in
// alphabatical order
// return the sorted char array
#define RANGE 255 

char* countSort(char arr[])
{

    // only gravity will pull me down

    // Counting Sort

    char output[strlen(arr)];  
    int count[RANGE + 1], i;  
    memset(count, 0, sizeof(count));  
    for(i = 0; arr[i]; ++i)  
        ++count[arr[i]];  
    for (i = 1; i <= RANGE; ++i)  
        count[i] += count[i-1];  
    for (i = 0; arr[i]; ++i)  
    {  
        output[count[arr[i]]-1] = arr[i];  
        --count[arr[i]];  
    }    
    for (i = 0; arr[i]; ++i)  
        arr[i] = output[i];
    return arr;
}