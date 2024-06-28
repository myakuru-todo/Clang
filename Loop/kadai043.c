#include<stdio.h>
main()
{
    int i;
    printf("文字コード（-1で入力終了）");
    scanf("%d", &i);
    while (i != -1) {
        printf("%c\n", i);
        printf("文字コード（-1で入力終了）");
        scanf("%d", &i);
    }
}
/*#include <stdio.h>

int main()
{
    int i;
    printf("文字コード（-1で入力終了）");
    scanf("%d", &i);

    while (i != -1) {
        printf("%c\n", i);
        printf("文字コード（-1で入力終了）");
        scanf("%d", &i);
    }

    return 0;
}
*/