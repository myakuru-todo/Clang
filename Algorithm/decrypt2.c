#include <stdio.h>

main() {
	int i,k[30];
	char s[10];
	printf("���������͂��Ă�������");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++) {
		printf("k[%d]�̕������L�[",i);
		scanf("%d", &k[i]);
		s[i] = s[i]-k[i];
		
	}
	printf("�������ςݕ������%s", s);
}