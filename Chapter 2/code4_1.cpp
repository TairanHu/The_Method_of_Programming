

int MaxSubArray(int *a, int n)
{
    int currSum = 0;
    int maxSum = a[0];

    int curstart = 0;
    int start = 0;
    int end = 0;

    for(int i = 0; i < n; i++)
    {
        if(currSum >= 0)
        {
            currSum += a[i];
        }
        else
        {
            currSum = a[i];
            curstart = i;
        }

        if(maxSum < currSum)
        {
            maxSum = currSum;
            start = curstart;
            end = i;
        }

    }

    return maxSum;

}

