/************************************

    第一章 1.1举一反三答案
    
************************************/

#include <stdio.h>
#include <string.h>


void ReverseString(char *s, int from, int to)
{
    while(from < to)
    {
        char t = s[from];
        s[from++] = s[to];
        s[to--] = t;
    }
}

void main()
{
    int from = 0;
    int to = 0;
    char s[] = "I am a student.";
    int len = strlen(s);

    printf("%s\n", s);

    while(s[to] != 0)
    {
        if(s[to] == ' ')
        {
            ReverseString(s, from, to-1);
            from = to+1;
        }
        to++;
    }
    ReverseString(s, from, to-1);
    ReverseString(s, 0, to-1);

    printf("%s", s);

}
