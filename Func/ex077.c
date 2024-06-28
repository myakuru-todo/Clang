#include<stdio.h>
void result(int x, int y, int z, int* big, int* small);
main() {
    int a, b, c, d, e;
    printf("®”‚ğ‚R‚Â“ü—Í: ");
    scanf("%d%d%d", &a, &b, &c);
    result(a, b, c, &d, &e);
    printf("Å‘å’l=%d Å¬’l=%d", d, e);
}
void result(int x, int y, int z, int* big, int* small) {
    int num[3] = { x,y,z };
    int i, j, w;
    for (i = 0; i < 2; i++) {
        for (j = i + 1; j < 3; j++) {
            if (num[i] > num[j]) {
                w = num[i];
                num[i] = num[j];
                num[j] = w;
            }
        }
    }
    *big = num[2];
    *small = num[0];
    return;
}
