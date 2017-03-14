/************************************
    ��һ�� 1.1��Ŀ�ⷨ����

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

    �ַ���ָ��Ϊ�������飬���ܸı�

    ************************/

    printf("%s\n", s);

    LeftRotateString(s, strlen(s), 3);

    printf("%s", s);

}



