#include <stdio.h>

main()
{
	char s[19];
	int i;

	printf("���W���c����͂��Ă�������");
	scanf("%s", &s);

	for (i=0;s[i] != '\0';i++) 
	{
		s[i] = s[i] + 1;
		
	}
	printf("�Í���������%s��\��", s);
}