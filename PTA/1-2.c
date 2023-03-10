// todo 要求对两个整数a和b，输出两者中较大的一个

#include <stdio.h>

int max(int a, int b);

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("max = %d\n", max(a, b));

    return 0;
}

int max(int a, int b)
{
    if (a - b >= 0)
        return a;
    else
        return b;
}