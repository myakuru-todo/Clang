#include<stdio.h>

main() 
{
	int a;
	printf("0����100�܂ł̐��l\n");
	scanf("%d", &a);
	if (a >= 30 && a <= 100) {
		if (a >= 30 && a <= 50) {
			printf("���̐��l�̔��茋�ʂ�2�ł�");
		}
		if (a >= 50 && a <= 80) {
			printf("���̐��l�̔��茋�ʂ�3�ł�");
		}
		if (a >= 80 && a <= 90) {
			printf("���̐��l�̔��茋�ʂ�4�ł�");
		}
		if (a >= 90) {
			printf("���̐��l�̔��茋�ʂ�5�ł�");
		}
				
			
		
	}
	else {
		printf("����ȊO");
	}
}