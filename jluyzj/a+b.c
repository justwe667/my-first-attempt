#include <stdio.h>
int main()
{
    double a, b;
    double c; // 引入需要变量

    printf("请输入两个数：\n");
    scanf("%lf %lf", &a, &b); // 加数产生

    c = a + b;
    printf("它们的和是： %lf", c); // 计算并打印和

    getchar();
    return 0; // over
}