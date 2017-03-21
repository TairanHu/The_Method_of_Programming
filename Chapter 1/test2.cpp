
#include <cstring>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    char s[20];
    int len = 0;

    scanf("%s", s);

    len = strlen(s);
    int r = len-1;
    int l = r;

    for(; l >= 0; r--)
    {
        if(s[r] == '*')
        {
            while(l > 0 && s[--l] == '*');
            if(l <= 0)
            {
                break;
            }

            swap(s[l], s[r]);
        }
        else
        {
            l--;
        }
    }
    printf("%s\n", s);


    return 0;
}

