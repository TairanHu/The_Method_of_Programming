

int MaxSubArray(int *a, int n)
{
    vector<int> max_num(n, 0);
    vector<int> min_num(n, 0);

    max_num[0] = a[0];
    min_num[0] = a[0];

    int res = max_num[0];

    for(int i = 1; i < n; i++)
    {
        max_num[i] = max(max(a[i]*max_num[i-1], a[i]*min_num[i-1]), a[i]);
        min_num[i] = min(min(a[i]*max_num[i-1], a[i]*min_num[i-1]), a[i]);

        if(max_num[i] > res)
        {
            res = max[i];
        }
    }

    return res;
}

