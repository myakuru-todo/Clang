#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
    int num = 0, ans, kazu;

    srand(time(0));
    rand();

    ans = rand() % 1000 + 1;

    printf("1�`1000�̒��œ�����̐���\�z���Ă�������\n");

    do {
        printf("������̐��́H��");
        scanf("%d", &kazu);
        if (kazu < ans) {
            printf("\n������̐���菬�����ł�\n");
        }
        if (kazu > ans) {
            printf("\n������̐����傫���ł�\n");
        }
        num++;
    } while (ans != kazu);
    printf("�����I%d��œ�����܂���", num);
}

	