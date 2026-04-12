#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;
    printf("input student numbers and subject numbers:\n");
    scanf("%d", &m);
    scanf("%d", &n);
    double graph[m + 1][n + 3];
    graph[m][0] = graph[m][n + 1] = graph[m][n + 2] = 0;

    for (int i = 0; i < m; i++)
    {
        printf("输入编号与成绩---:\n");
        for (int j = 0; j < n + 1; j++)
        {
            scanf("%lf", &graph[i][j]);
        }
    } /// 形成矩阵

    for (int i = 0; i < m; i++)
    {
        double total = 0.0;
        for (int j = 1; j < n + 1; j++)
        {
            total += graph[i][j];
        }
        double avg = total / n;
        graph[i][n + 1] = total;
        graph[i][n + 2] = avg;
    } /// 个人平均分，总得分计算赋值

    for (int j = 1; j <= n; j++)
    {
        double col_sum = 0;

        for (int i = 0; i < m; i++)
        {
            col_sum += graph[i][j];
        }
        graph[m][j] = col_sum / m;
    } /// 每一科目平均分计算，赋值

    for (int i = 0; i < m; i++)
    {
        for (int j = m - 1; j >= i + 1; j--)
        {
            if (graph[j - 1][n + 1] < graph[j][n + 1])
            {
                for (int h = 0; h < n + 3; h++)
                {
                    double tempt;
                    tempt = graph[j - 1][h];
                    graph[j - 1][h] = graph[j][h];
                    graph[j][h] = tempt;
                }
            }
        }
    } /// 排序

    printf("\n读取的成绩矩阵:\n");
    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n + 3; j++)
        {
            printf("%lf ", graph[i][j]);
        }
        printf("\n");
    } /// 打印

    return 0;
}
