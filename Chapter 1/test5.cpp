
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void ReverseString(string &s, int from, int to)
{
    while(from < to)
    {
        char t = s[from];
        s[from++] = s[to];
        s[to--] = t;
    }
}

int main()
{
    int from = 0;
    int to = 0;
    string str = "abc  efg  hij";

    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == ' ')
        {
            while(str[i+1] == ' ')
            {
                str.erase(i, 1);
            }
        }
    }

    cout << str << endl;

    for(int to = 0; to < str.size(); to++)
    {
        if(str[to] == ' ')
        {
            ReverseString(str, from, to-1);
            from = to+1;
        }
    }
    cout << str << endl;

    return 0;
}



