#include<stdio.h>
main() {
    int box[100];
    int g;
    int i;

    g = 0.0;

    for (i = 0; i!=-999; i++) {
        printf("実数を入力: ");
        scanf("%d", &box[i]);
    }

    printf("合計は%dです\n", box[i]);
}