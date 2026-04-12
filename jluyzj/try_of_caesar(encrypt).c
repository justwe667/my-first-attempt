#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("please input the paintext:\n");
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }

    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = (str[i] - 'a' + 3) % 26 + 'a';
        }
    }
}