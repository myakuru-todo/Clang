#include <stdio.h>

main() {
	int i,k[30];
	char s[10];
	printf("文字列を入力してください");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++) {
		printf("k[%d]の復号化キー",i);
		scanf("%d", &k[i]);
		s[i] = s[i]-k[i];
		
	}
	printf("復号化済み文字列は%s", s);
}