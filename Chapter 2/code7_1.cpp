
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "RGBRGBRGB";
    int begin_str = 0;
    int current = 0;
    int end_str = str.size()-1;

    while(current <= end_str)
    {
        if(str[current] == 'R')
        {
            swap(str[begin_str], str[current]);
            begin_str++;
            current++;
        }
        else if(str[current] == 'G')
        {
            current++;
        }
        else
        {
            swap(str[current], str[end_str]);
            end_str--;
        }
    }
    cout << str;

    return 0;
}

