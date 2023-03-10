//*习题5-7 使用函数求余弦函数的近似值
// todo 用公式求cos(x)的近似值，精确到最后一项的绝对值小于e
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double funcos(double e, double x);

int main()
{
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
    system("pause");
    return 0;
}

// double fact(int n)
// {
//     double f = 1.0;
//     if (n == 0)
//         return 1;
//     else
//         f = n * fact(n - 1);
//     return f;
// }

double funcos(double e, double x)
{
    double item;
    double sum = 1;
    double flag = -1;
    double fenzi;
    double fenmu = 1;
    int n = 2;
    //! 对于公式，要记得拆
    //!这题拆成分子、分母、系数
    do
    {
        //*计算分母
        for (int i = 1; i <= n; i++)
        {
            fenmu = fenmu * i;
        }
        //*计算分子
        fenzi = pow(x, n);

        item = fenzi / fenmu;
        sum += item * flag;
        flag = -flag;
        fenmu = 1;
        n += 2;
    } while (item >= e);
    return sum;
}
