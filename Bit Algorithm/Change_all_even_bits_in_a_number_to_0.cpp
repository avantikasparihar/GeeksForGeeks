// User function Template for C++
class Solution {
  public:
    long long int convertEvenBitToZero(long long int n) {
        // only gravity will pull me down

        // Change all even bits in a number to 0

        return n & 0xaaaaaaaa;   // bitmask of 32-bit binary no with alternate 1's and 0's
    }
};