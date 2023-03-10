// todo 计算N个整数中所有奇数的和，同时实现一个判断奇偶性的函数
//*其中函数even将根据用户传入的参数n的奇偶性返回相应值：当n为偶数时返回1，否则返回0。
//*函数OddSum负责计算并返回传入的N个整数List[] 中所有奇数的和。

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXN 10

int even(int n);
int OddSum(int List[], int N);

int main()
{
    int List[MAXN], N, i;

    scanf("%d", &N);
    printf("Sum of ( ");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &List[i]);
        if (even(List[i]) == 0)
            printf("%d ", List[i]);
    }
    printf(") = %d\n", OddSum(List, N));

    return 0;
}

int even(int n)
{
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

int OddSum(int List[], int N)
{
    int i;
    int sum = 0;
    for (i = 0; i < N; i++)
    {
        if (even(List[i]) == 0)
            sum += List[i];
    }
    return sum;
}

//? 遇到的问题 使用了int n = strlen(List);
//* strlen()是判断字符串长度的，本题是数组