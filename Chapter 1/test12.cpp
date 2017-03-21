

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int max_length(string &str, int pos)
{
    int num = 1;

    if(pos >= str.size())
    {
        return 0;
    }

    char tmp = str[pos];
    while(++pos < str.size() && str[pos] == tmp)
    {
        num++;
    }

    int t = max_length(str, pos);

    return num > t ? num : t;
}

int main()
{
    string str;

    getline(cin, str);
    cout << max_length(str, 0);

    return 0;
}



