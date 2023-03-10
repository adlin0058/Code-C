//?练习5-3 数字金字塔
// todo 实现函数输出n行数字金字塔

#include <stdio.h>
#include <stdlib.h>

void pyramid(int n);

int main()
{
    int n;

    scanf("%d", &n);
    pyramid(n);

    system("pause");
    return 0;
}

void pyramid(int n)
{
    int i, j, k;
    //*修改 int count=1;

    //!  注意↓这里为1不然会多一行空格
    for (i = 1; i <= n; i++) //* 打印n行
    {
        for (j = n - i; j > 0; j--) //*打印每一行前面的空格
        {
            printf(" ");
        }
        for (k = 0; k < i; k++) //*打印i个i
        {
            printf("%d ", i);
        }

        //* 打印递增数字
        /*
        for(k=0;k<i;k++){
            printf("%d",count);
            count++;
        }
        */
        printf("\n");
    }
}