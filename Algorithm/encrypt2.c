#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i, n, k[10];
	char s[10];
	srand(time(0));

	printf("����");
	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++) 
	{
		//���������߂�
		k[i] = rand() % 6;
		//�Í����v���O����
		s[i] = s[i] + k[i];
	}
	printf("�Í���������>%s\n", s);
	printf("�Í���key��>");
	
	for (n = 0; n < i; n++) {
		printf("%d",k[n]);
	}
}