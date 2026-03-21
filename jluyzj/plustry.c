#include <stdio.h>
int main()
{
    double a, b;
    double c;

    printf("please input two numbers:\n");
    scanf("%lf %lf", &a, &b);

    c = a + b;
    printf("the sum is: %lf", c);

    return 0;
}
