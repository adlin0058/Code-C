#include <stdio.h>
#include <stdlib.h>
int sum(int m, int n);

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    printf("sum = %d\n", sum(m, n));

    system("pause");
    return 0;
}
int sum(int m, int n)
{
    int sum = 0;
    while (1)
    {
        if (m <= n)
        {
            sum += m;
            m++;
        }
        else
            break;
    }
    return sum;
}