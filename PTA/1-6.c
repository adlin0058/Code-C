//?习题5-3 使用函数计算两点间的距离
// todo 对给定平面任意两点坐标(x1,y1),(x2,y2),QQ两点之间的距离
//*两点间距离公式

#include <stdio.h>
#include <math.h>

double dist(double x1, double y1, double x2, double y2);

int main()
{
    double x1, y1, x2, y2;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    printf("dist = %.2f\n", dist(x1, y1, x2, y2));

    return 0;
}

double dist(double x1, double y1, double x2, double y2)
{
    double dist;
    dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    return dist;
}
//* 开根号  sqrt()
//* 平方    pow(a,b) 意为a的b次方