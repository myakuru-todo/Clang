#include <stdio.h>

main()
{
	int c;
	char  dumy[256];
	char data1,data2; /*入力用*/

	c = scanf("%c%c",&data1,&data2);

	while (c != EOF) /*データの入力完了 ctrl + z*/
	{          
		printf("%d",c);

		putchar('\n');

		gets(dumy); /*入力バッファーのクリア*/

		c = scanf("%c%c",&data1,&data2);
	}

}