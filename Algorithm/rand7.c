#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
    int num = 0, ans, kazu;

    srand(time(0));
    rand();

    ans = rand() % 1000 + 1;

    printf("1〜1000の中で当たりの数を予想してください\n");

    do {
        printf("当たりの数は？→");
        scanf("%d", &kazu);
        if (kazu < ans) {
            printf("\n当たりの数より小さいです\n");
        }
        if (kazu > ans) {
            printf("\n当たりの数より大きいです\n");
        }
        num++;
    } while (ans != kazu);
    printf("正解！%d回で当たりました", num);
}

	