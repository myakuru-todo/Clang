#include <stdio.h>

main()
{
	char moji;
	printf("演算子いれて");
	scanf("%c", &moji);

	switch (moji)
	{
	case '/':  printf( "除算です");
		break;
	case '*':  printf("乗算です");
		break;
	case '+':  printf("加算です");
		break;
	case '-': printf("減算です");
		break;

	default:
		break;
	}
}