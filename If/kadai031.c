#include<stdio.h>

main()
{
	float a, b;
	printf("2つの実数?\n");
	scanf("%f%f", &a, &b);
	if (a > b) {
		printf("大きい方は%fです", a);
	}
	else {
		printf("大きい方は%fです", b);
	}

}