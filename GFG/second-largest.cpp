int print2largest(int arr[], int n)
{
    // code here
    int first = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            first = arr[i];
        }
    }
    int sec = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != first)
        {
            sec = max(sec, arr[i]);
        }
    }
    return sec;
}