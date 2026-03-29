#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Please input a string to encrypt:\n");
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    } //>>>>>>输入需要加密的字明文，并且去尾
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = (str[i] - 'a' + 3) % 26 + 'a';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = (str[i] - 'A' + 3) % 26 + 'A';
        }
    } //>>>>>>caesar密码加密算法

    printf("Encrypted string: %s\n", str);
    return 0; //>>>>>>输出结密文，结尾
}