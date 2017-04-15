

#include <iostream>
#include <vector>
#include <map>
#include <climits>

using namespace std;

int main()
{
    int test[] = {4, 8, 5, 7, 9, 2, 1, 6, 3, 0};
    int len = sizeof(test)/sizeof(int);
    int dis = INT_MIN;

    map<int, int> map_test;
    for(int i = 0; i < len ; i++)
    {
        map_test[test[i]] = i;
    }

    for(map<int, int>::iterator it = map_test.begin(); it != map_test.end(); it++)
    {
        map<int, int>::iterator tmp = ++it;
        it--;
        for( ; tmp != map_test.end(); tmp++)
        {
            int a = tmp->second - it->second;
            if(a>0)
            {
                dis = dis < a ? a : dis;
            }

        }
    }

    cout << dis;





    return 0;
}


