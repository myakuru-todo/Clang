#include <stdio.h>

void a(char* s1, char* s2);
main()
{
    char str1[256], str2[256];
    printf("配列 a: ");
    gets(str1);
    printf("配列 b: ");
    gets(str2);
    a(str1, str2);
    printf("配列 a:%s",str1);
}
void a(char* s1, char* s2)
{
    int i, j;
    for (i = 0; *(s1 + i) != '\0'; i++);
    //\0になるまで入力した文字を計算する
    for (j = 0; *(s1 + i) = *(s2 + j); j++, i++);
    
}
