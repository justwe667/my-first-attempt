#include <stdio.h>

int main()
{
    double test_num;
    printf("请输入一个小数（比如 10.5）：");

    // 重点1：检查 scanf 的返回值
    int read_count = scanf("%lf", &test_num);

    printf("scanf 成功读取了 %d 个数据\n", read_count);
    printf("读取到的数值是：%.2lf\n", test_num);

    return 0;
}