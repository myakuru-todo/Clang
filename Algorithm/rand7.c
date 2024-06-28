#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
    int num = 0, ans, kazu;

    srand(time(0));
    rand();

    ans = rand() % 1000 + 1;

    printf("1`1000‚Ì’†‚Å“–‚½‚è‚Ì”‚ğ—\‘z‚µ‚Ä‚­‚¾‚³‚¢\n");

    do {
        printf("“–‚½‚è‚Ì”‚ÍH¨");
        scanf("%d", &kazu);
        if (kazu < ans) {
            printf("\n“–‚½‚è‚Ì”‚æ‚è¬‚³‚¢‚Å‚·\n");
        }
        if (kazu > ans) {
            printf("\n“–‚½‚è‚Ì”‚æ‚è‘å‚«‚¢‚Å‚·\n");
        }
        num++;
    } while (ans != kazu);
    printf("³‰ğI%d‰ñ‚Å“–‚½‚è‚Ü‚µ‚½", num);
}

	