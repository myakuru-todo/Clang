#include<stdio.h>

main()
{
	float a, b;
	printf("2�̎���?\n");
	scanf("%f%f", &a, &b);
	if (a > b) {
		printf("�傫������%f�ł�", a);
	}
	else {
		printf("�傫������%f�ł�", b);
	}

}