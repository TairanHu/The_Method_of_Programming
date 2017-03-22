

#include <iostream>
#include <vector>
#include <map>

using namespace std;

map<int, int>tmp;

int main()
{
    int sum = 26;
    int num[] = {11,12,13,14,15,16,17,18,19,10};

    for(int i = 0; i < 10; i++)
    {
        tmp[num[i]] = i;
    }

    map<int, int>::const_iterator map_left = tmp.begin();
    map<int, int>::const_iterator map_right = tmp.end();

    map_right--;

    while(map_left != map_right)
    {
        if(map_left->first + map_right->first < sum)
        {
            map_left++;
        }
        else if(map_left->first + map_right->first > sum)
        {
            map_right--;
        }
        else
        {
            cout << map_left->second << " " << map_right->second << endl;
            map_left++;
            map_right--;
        }
    }

    return 0;
}


