#include<stdio.h>

main() 
{
	int a;
	printf("0から100までの数値\n");
	scanf("%d", &a);
	if (a >= 30 && a <= 100) {
		if (a >= 30 && a <= 50) {
			printf("その数値の判定結果は2です");
		}
		if (a >= 50 && a <= 80) {
			printf("その数値の判定結果は3です");
		}
		if (a >= 80 && a <= 90) {
			printf("その数値の判定結果は4です");
		}
		if (a >= 90) {
			printf("その数値の判定結果は5です");
		}
				
			
		
	}
	else {
		printf("それ以外");
	}
}