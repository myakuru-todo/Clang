#include <stdio.h>
void display(int a);   /*�v���g�^�C�v�錾*/
int main(void)
{
	int a;
	printf(" data ?: ");
	scanf(" %d", &a);
	display(a);   /*display�֐��̌Ăяo��*/

}
/*�֐�display�̋L�q*/
void display(int a)
{
	printf("���̓f�[�^= %d\n", a);
	return;
}