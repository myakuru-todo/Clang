#include <stdio.h>

int main() {
    int a, b, num;
    printf("���́H");
    scanf("%d", &num);
    a = 0;
    do {
        b = 0;
        // �󔒕������o�͂��Ĕ��]�\������������
        do {
            printf(" ");
            b++;
        } while (b < num - a);
        b = 0;
        // "*" ���E�񂹂��ďo��
        do {
            printf("*");
            b++;
        } while (b < a + 1);
        //���s����B
        printf("\n");
        a++;
    } while (num > a);
    
}