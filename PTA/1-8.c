//? 习题5-5 使用函数统计指定数字的个数
// todo 实现一个统计整数中指定数字的个数的简单函数
#include <stdio.h>
#include <stdlib.h>

int CountDigit(int number, int digit);

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    system("pause");
    return 0;
}

int CountDigit(int number, int digit)
{
    int count = 0;
    if (number < 0)
        number = -number;
    while (1)
    {
        if (number % 10 == digit)
            count++;
        number = number / 10;
        if (number == 0)
            break;
    }
    return count;
}
