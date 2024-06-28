#include <stdio.h>

void find_min_max(int* max, int* min);

int main() {
    int max, min;

    find_min_max(&max, &min);

    return 0;
}

void find_min_max(int* max, int* min) {
    int num;
    int first = 1;  // 最初の入力かどうかを判断するフラグ

    printf("Enter integers (EOF to end):\n");

    // 標準入力から整数を読み取るループ
    while (scanf("%d", &num) != EOF) {
        if (first) {
            *max = *min = num;  // 最初の入力を初期値として設定
            first = 0;          // 最初の入力が終わったのでフラグを下げる
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



