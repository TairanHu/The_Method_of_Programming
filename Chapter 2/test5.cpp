
#include <iostream>

using namespace std;

bool isOne(int num, int pos)
{
    num = num >> (pos-1);
    return num & 0x01;
}

int main()
{
    int nums[] = {1,2,3,4,5,6,4,3,2,1,5,5,6,6};
    int tmp = 0;
    int num1 = 0;
    int num2 = 0;
    int len = sizeof(nums)/sizeof(int);

    for(int i = 0; i < len; i++)
    {
        tmp ^= nums[i];
    }

    int pos = 1;
    while(!(tmp & 1))
    {
        tmp = tmp >> 1;
        pos++;
    }

    for(int i = 0; i < len; i++)
    {
        if(isOne(nums[i], pos))
        {
            num1 ^= nums[i];
        }
        else
        {
            num2 ^= nums[i];
        }
    }

    cout << num1 << " " << num2 << endl;

    return 0;
}
