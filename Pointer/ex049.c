#include <stdio.h>

main() {
	int a = 100, b;//�ϐ��̐錾
	int* p_a;//�|�C���^�̐錾
	p_a = &a;//a�̏Z������͂��Ă邾�� 
	b = *p_a;//p_a�̓��e��a=100

	printf("a=%d b=%d *p_a=%d\n", a, b, *p_a);
}