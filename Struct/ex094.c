#include<stdio.h>
#include <stdio.h>
struct profile {
    char name[20];
    int birth[3];
    char blood[5];
};
main() {
    struct profile data[5];
    struct profile* p;
    int i;
    for (p = data, i = 0; i < 5; i++, p++) {
        printf("%dl–Ú(–¼‘O):", i + 1);
        scanf("%s", p->name);
        printf("’a¶“ú");
        scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
        printf("ŒŒ‰tŒ^:");
        scanf("%s", p->blood);
    }
    for (p = data, i = 0; i < 5; i++, p++) {
        if (strcmp(p->blood, "A") == 0 || strcmp(p->blood, "a") == 0) {
            printf("%s--%d”N%dŒŽ%d“ú¶ ŒŒ‰tŒ^-%sŒ^\n",
                p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
        }
    }
}