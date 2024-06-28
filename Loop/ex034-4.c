#include <stdio.h>

int main() {
    int a, b, num;
    printf("数は？");
    scanf("%d", &num);
    a = 0;
    do {
        b = 0;
        // 空白文字を出力して反転表示を実現する
        do {
            printf(" ");
            b++;
        } while (b < num - a);
        b = 0;
        // "*" を右寄せして出力
        do {
            printf("*");
            b++;
        } while (b < a + 1);
        //改行する。
        printf("\n");
        a++;
    } while (num > a);
    
}