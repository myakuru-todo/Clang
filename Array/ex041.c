#include<stdio.h>
main() {
    float box[3];
    float g;
    int i;

    g = 0.0;

    for (i = 0; i < 3; i++) {
        printf("���������: ");
        scanf("%f", &box[i]);
    }
    for (i = 0; i < 3; i++) {
        g += box[i];
    }
    printf("���v��%.2f�ł�\n", g);
    printf("���ς�%.2f�ł�", g / 3.0);
}
