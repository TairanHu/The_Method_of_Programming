
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> count_char(128, 0);
    string str;

    cin >> str;
    for(int i = 0; i < str.size(); i++)
    {
        count_char[str[i]]++;
    }

    for(int i = 0; i < 128; i++)
    {
        if(count_char[i] == 0)
        {
            //continue;
        }
        cout << (char)i << " " << count_char[i] << "¸ö" << endl;
    }

    return 0;
}


