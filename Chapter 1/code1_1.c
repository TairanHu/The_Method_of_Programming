/************************************
    第一章 1.1题目解法二答案

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

void LeftRotateString(char *s, int n, int m)
{
    m %= n;
    ReverseString(s, 0, m-1);
    ReverseString(s, m, n-1);
    ReverseString(s, 0, n-1);
}

void main()
{
    char s[] = "abcdef";


    /************************
    char *s = "abcdef";

    字符串指针为常量数组，不能改变

    ************************/

    printf("%s\n", s);

    LeftRotateString(s, strlen(s), 3);

    printf("%s", s);

}



