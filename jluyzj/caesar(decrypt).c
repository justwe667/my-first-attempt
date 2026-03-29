#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Please input a string to decrypt:\n");
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
    {

        str[len - 1] = '\0';
    } //>>>>>>输入需要解密的密文，并且去尾

    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = (str[i] - 3 + 26 - 'a') % 26 + 'a';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = (str[i] - 3 + 26 - 'A') % 26 + 'A';
        }
    } //>>>>>>caesar解密算法计算

    printf("the descrypted context is : \n %s", str);
    return 0; //>>>>>>输出明文，结束
}
