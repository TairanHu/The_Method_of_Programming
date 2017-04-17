
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int test[] = {1, 2, 0, 2, -1, 999, 3, 999, 88};
    vector<int> res;
    map<int, int> tmp;

    res.push_back(test[0]);
    tmp[test[0]] = 1;

    cout << test[0];

    for(int i = 1; i < sizeof(test)/sizeof(int); i++)
    {
        if(tmp.count(test[i]))
        {
            continue;
        }
        tmp[test[i]] = 1;
        cout << " " << test[i];
        res.push_back(test[i]);
    }

    return 0;
}


