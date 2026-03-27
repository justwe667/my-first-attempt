#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, delta, rex1, rex2, imx1, imx2;
    printf("there are three coefficients of the equation ax^2 + bx + c = 0,please input a, b, c(like a-b-c)\n");
    scanf("%lf-%lf-%lf", &a, &b, &c);

    delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        rex1 = -b / (2 * a);
        imx1 = sqrt(-delta) / (2 * a);
        rex2 = -b / (2 * a);
        imx2 = -sqrt(-delta) / (2 * a);
        printf("x1 = %lf + %lfi\n", rex1, imx1);
        printf("x2 = %lf - %lfi\n", rex2, -imx2);
    }
    else if (delta >= 0)
    {
        rex1 = (-b + sqrt(delta)) / (2 * a);
        rex2 = (-b - sqrt(delta)) / (2 * a);
        printf("x1 = %lf\n", rex1);
        printf("x2 = %lf\n", rex2);
    }

    return 0;
}
