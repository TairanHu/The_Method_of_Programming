
//Direct addition and subtraction
int find_num(int *test)
{
    long long tmp = 0;
    for(int i = 0; i <= 1000; i++)
    {
        tmp += test[i];
    }
    return tmp - 500*1001;
}

//XOR operation
//http://www.cnblogs.com/Ivony/archive/2009/07/23/1529254.html
int find_num(int *test)
{
    int result = 0;
    for(int i = 0; i <= 1000; i++)
    {
        result ^= test[i];
    }

    for(int i = 1; i <= 1000; i++)
    {
        result ^= i;
    }

    return result;
}
