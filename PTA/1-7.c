//?习题5-4 使用函数求素数和
// todo 判断素数的简单函数、以及利用该函数计算给定区间内素数和的函数
//* 素数就是只能被1和自身整除的正整数

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int prime(int p);
int PrimeSum(int m, int n);

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for (p = m; p <= n; p++)
    {
        if (prime(p) != 0)
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    system("pause");
    return 0;
}

int prime(int p)
{
    int i;
    if (p <= 1)
        return 0;
    else if (p == 2)
        return 1;
    else
    {
        for (i = 2; i <= p - 1; i++)
        {
            if (p % i == 0)
                break;
        }
        if (i >= p) //! i++加到大于等于p，说明2~p-1都不能整除，p所以为素数
            return 1;
        else
            return 0;
    }
}

int PrimeSum(int m, int n)
{
    int sum = 0;
    for (int i = m; i <= n; i++)
    {
        if (prime(i) == 1)
        {
            sum += i;
        }
    }
    return sum;
}