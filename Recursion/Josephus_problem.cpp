/*You are required to complete this method */
int josephus(int n, int k)
{
    // only gravity will pull me down

    // Josephus problem
   
    if (n == 1)
        return 1;
    return (josephus(n-1, k) + k - 1) % n + 1;    // easy peasy, only if I remember the recurrence relation :)
}