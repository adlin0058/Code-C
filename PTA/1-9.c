//?习题5-6 使用函数输出水仙花数
// todo 每个位上的数字的N次幂之和等于它本身
//* 用number/10记录下每一位的数
//*然后判断
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int narcissistic(int number);
void PrintN(int m, int n);

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if (narcissistic(m))
        printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if (narcissistic(n))
        printf("%d is a narcissistic number\n", n);

    system("pause");
    return 0;
}

int narcissistic(int number) //!判断是否为水仙花数
{
    int temp;
    int n; //*用于存放当前最低位的数字
    int count = 0;
    int sum = 0;

    temp = number;
    while (temp)
    {
        temp = temp / 10;
        count++;
    }
    temp = number; //记得将temp重置
    while (temp)
    {
        n = temp % 10;
        sum += pow(n, count);
        temp = temp / 10;
    }
    if (number == sum)
    {
        return 1;
    }
    else
        return 0;
}

void PrintN(int m, int n) //!打印m~n（不包括）之间的水仙花数
{
    for (int i = m + 1; i < n; i++)
    {
        if (narcissistic(i) == 1)
            printf("%d\n", i);
    }
}
