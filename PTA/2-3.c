//*习题6-3 使用函数输出指定范围内的完数
// todo 实现一个计算整数因子和的简单函数
// todo 输出两正整数m和n（0<m≤n≤10000）之间的所有完数
//*所谓完数就是该数恰好等于除自身外的因子之和。例如：6=1+2+3，其中1、2、3为6的因子。

#include <stdio.h>
#include <stdlib.h>
int factorsum(int number);
void PrintPN(int m, int n);

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if (factorsum(m) == m)
        printf("%d is a perfect number\n", m);
    if (factorsum(n) == n)
        printf("%d is a perfect number\n", n);
    PrintPN(m, n);
    system("pause");
    return 0;
}

int factorsum(int number)
{
    int sum = 0;
    for (int i = 1; i <= number / 2; i++)
    {
        if (number % i == 0)
            sum += i;
    }
    return sum;
}

void PrintPN(int m, int n)
{
    int i, k;
    int count = 0;
    int sum = 0;
    int number;
    int factor[1000];
    for (number = m; number <= n; number++)
    {
        //逐个计算因数，并存入数组factor[]，用k记录数组长度
        k = 0;
        sum = 0;
        for (int i = 1; i <= number / 2; i++)
        {
            if (number % i == 0)
            {
                factor[k] = i;
                k++;
                sum += i;
            }
        }
        //打印完数表达式
        if (number == sum)
        {
            count++;
            printf("%d = ", number);
            for (i = 0; i < k; i++)
            {
                printf("%d", factor[i]);
                if (i < k - 1)
                    printf(" + ");
            }
            printf("\n");
        }
    }
    if (count == 0)
    {
        printf("No perfect number\n");
    }
}
