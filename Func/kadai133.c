#include <stdio.h>

void find_min_max(int* max, int* min);

int main() {
    int max, min;

    find_min_max(&max, &min);

    return 0;
}

void find_min_max(int* max, int* min) {
    int num;
    int first = 1;  // �ŏ��̓��͂��ǂ����𔻒f����t���O

    printf("Enter integers (EOF to end):\n");

    // �W�����͂��琮����ǂݎ�郋�[�v
    while (scanf("%d", &num) != EOF) {
        if (first) {
            *max = *min = num;  // �ŏ��̓��͂������l�Ƃ��Đݒ�
            first = 0;          // �ŏ��̓��͂��I������̂Ńt���O��������
        }
        else {
            if (num > *max) {
                *max = num;
            }
            if (num < *min) {
                *min = num;
            }
        }
    }

    if (first) {
        printf("No valid integers were entered.\n");
    }
    else {
        printf("Maximum value: %d\n", *max);
        printf("Minimum value: %d\n", *min);
    }
}



