//*习题6-4 使用函数输出指定范围内的Fibonacci数
// todo 实现一个计算Fibonacci数的简单函数
// todo 输出两正整数m和n（0<m≤n≤10000）之间的所有Fibonacci数
//*所谓Fibonacci数列就是满足任一项数字是前两项的和（最开始两项均定义为1）的数列。
#include <stdio.h>
#include <stdlib.h>
int fib(int n);
void PrintFN(int m, int n);

int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);
    system("pause");
    return 0;
}

int fib(int n)
{
    int sum = 0;
    if (n == 1 || n == 2)
        return 1;
    else
        sum = fib(n - 1) + fib(n - 2);

    return sum;
}
/*//!旧版本
void PrintFN(int m, int n)
{
    int i = 1;
    while (1)
    {
        if ((fib(i) > m) && (fib(i) <= n))
        {
            printf("%d", fib(i));
            if ((fib(i + 1) > m) && (fib(i + 1) <= n))
                printf(" ");
        }

        if (fib(i) > n)
            break;
        i++;
    }
}
*/
//!更好的
void PrintFN(int m, int n)
{
    int i = 1;
    int count = 0;
    //*先让i递加到fib(i)>m
    while (fib(i) < m)
        i++;
    while (fib(i) <= n)
    {
        //*count用于记打印的是第几个数
        count++;
        //*如果为第一个数则不用打印空格
        if (count == 1)
            printf("%d", fib(i));
        //*如果不是第一个数则在数字前打印一个空格
        else
            printf(" %d", fib(i));
        //! i记得递加否则只会输出第一个
        i++;
    }
    //*count仍然为0说明fib(i)并没有满足过fib(i)<=n的条件
    //*即区间内无斐波那契数
    if (count == 0)
        printf("No Fibonacci number");
}