

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string str = "abaccdeff";
    vector<int> dic(128, 0);

    for(int i = 0; i < str.size(); i++)
    {
        dic[(int)str[i]]++;
    }

    for(int i = 0; i < str.size(); i++)
    {
        if(dic[(int)str[i]] == 1)
        {
            cout << str[i];
            break;
        }
    }

    return 0;
}

