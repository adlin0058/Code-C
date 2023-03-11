//*习题6-2 使用函数求特殊a串数列和
// todo 给定两个均不超过9的正整数a和n，要求编写函数求a+aa+aaa+⋯+aa⋯a（n个a）之和。

#include <stdio.h>
#include <stdlib.h>
int fn(int a, int n);
int SumA(int a, int n);

int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a, n));
    printf("s = %d\n", SumA(a, n));

    system("pause");
    return 0;
}

int fn(int a, int n)
{
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        result = result * 10 + a;
    }
    return result;
}

int SumA(int a, int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += fn(a, i);
    }
    return sum;
}
