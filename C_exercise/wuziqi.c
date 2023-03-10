// todo 判断一局下满的井字棋哪一方获胜（0/X）
//* 遍历二维数组

#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int size = 3;
    int board[3][3];
    int i, j;
    int numof0;
    int numof1;
    int result = -1;

    // TODO 读入矩阵
    //! 输入0/1
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &board[i][j]);
        }
    }

    // todo 判断行，看是否有三个相同的0/1
    for (i = 0; i < size && result == -1; i++)
    {
        numof0 = numof1 = 0;
        for (j = 0; j < size; j++)
        {
            if (board[i][j] == 0)
                numof0++;
            else
                numof1++;
            if (numof0 == size)
                result = 0;
            else if (numof1 == size)
                result = 1;
        }
    }

    // todo 判断列，看是否有三个相同的0/1
    for (j = 0; j < size && result == -1; j++)
    {
        numof0 = numof1 = 0;
        for (i = 0; i < size; i++)
        {
            if (board[i][j] == 0)
                numof0++;
            else
                numof1++;
            if (numof0 == size)
                result = 0;
            else if (numof1 == size)
                result = 1;
        }
    }

    // todo 判断左对角
    numof0 = numof1 = 0;
    for (i = 0; i < size; i++)
    {
        if (board[i][i] == 0)
            numof0++;
        else
            numof1++;
    }
    if (numof0 == size)
        result = 0;
    else if (numof1 == size)
        result = 1;

    // todo 判断右对角
    numof0 = numof1 = 0;
    for (i = 0; i < size; i++)
    {
        if (board[i][size - 1 - i] == 0)
            numof0++;
        else
            numof1++;
    }
    if (numof0 == size)
        result = 0;
    else if (numof1 == size)
        result = 1;

    switch (result)
    {
    case 0:
        printf("0获胜!\n");
        break;
    case 1:
        printf("1获胜!\n");
        break;
    default:
        printf("平局！\n");
        break;
    }

    system("pause");
    return 0;
}
