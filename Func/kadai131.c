#include <stdio.h>

int main(void)
{
	int ret=0;
	char i[256];
	printf("moji");
	ret = getchar();

	while (ret != EOF)
	{
		putchar(ret);
		printf("\n");
		gets(i);
		printf("moji");
		ret = getchar();

	}

}