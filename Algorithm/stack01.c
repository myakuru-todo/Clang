#include <stdio.h>

#define STACKSIZE 8
void display(void);
int  stack[STACKSIZE];
int sp = 0;

main() 
{

	int key, data, result;
	do {

		printf("\n\n*�v�b�V����i�A�|�b�v��o����͂���");
		key = getche();
		printf("\n");
		if (key == 'i') {
			printf("�f�[�^����>");
			scanf("%d", &data);
			result = push(data);
			if (result == -1) {
				printf("\n****�X�^�b�N�������ς��ł�*****\n");
			}
			else
			{
				display();
			}
		}
		if (key == 'o')
		{
			result = pop(&data);
			if (result == -1) {
				printf("\n****�X�^�b�N�������ς��ł�*****\n");
			}
			else {
				printf("�X�^�b�N����f�[�^(%d)�����o���܂���\n", data);
				display();
			}
		}
		
	} while (key != 'e');
}

void display(void)
{
	int i;
	printf("\n===���݂̃X�^�b�N�̓��e===\n");
	for (i = 0; i < STACKSIZE; i++) {
		printf("stack[%2d]��%5d", i, stack[i]);
		if (i == sp) {
			printf("��sp�������Ă���Ƃ����(����sp��%d)", sp);
		}
		printf("\n");
	}
	return;
}
//�v�b�V���֐�
int push(int d)
{
	if (sp >= STACKSIZE) { return -1; }
	stack[sp] = d;//�X�^�b�N��d��ǉ�
	sp++;         //�������C���N�������g 
	return 0;
}
//�|�b�v�֐�
int pop(int* pd)
{
	if (sp <= 0) { return -1; }
	*pd = stack[sp];//�X�^�b�N����f�[�^�]�����o����pd�Ԓn�̒��g�ɂ����
	stack[sp] = 0;
	return 0;
}