

int MaxSubArray(int *a, int n)
{
    int maxSum = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] > 0)
        {
            maxSum += a[i];
        }
    }

    return maxSum;
}

