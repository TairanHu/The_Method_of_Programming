

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool SumOf_K_Number(vector<int> &num, int pos, int sum)
{
    if(sum == 0)
    {
        return true;
    }
    if(pos >= num.size())
    {
        return false;
    }

    if(SumOf_K_Number(num, pos+1, sum-num[pos]) || SumOf_K_Number(num, pos+1, sum))
    {
        return true;
    }

    return false;
}

int main()
{
    int sum = -40;
    vector<int> num;
    for(int i = 0; i < 10; i++)
    {
        num.push_back(i);
    }

    cout << SumOf_K_Number(num, 0, sum);

    return 0;
}


