#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//�v���g�^�C�v�錾
void Put_Block(void);
void Turn_Left(void);
void Turn_Right(void);

//�O���ϐ�
//�������W���[���i�\�[�X�t�@�C���j�̑S�Ă̊֐����痘�p�\
int b[4][4]={	//�S�~�S�̃u���b�N�f�[�^
	{0,0,0,0},
	{0,1,1,0},
	{0,0,1,0},
	{0,0,1,0}
};

//�G���g���|�C���g
main() 
{
	int key;

	Put_Block();	//�ŏ��̃u���b�N�\��

	//�Q�[�����[�v
	while (1) {
		if (kbhit()) {	//�L�[���͂̃`�F�b�N
			key = getch();	//�G�R�[�o�b�N�Ȃ��œ���
		}
		else {
			key = 0;
		}
		if (key == 'l'|| key == 'L') { //L�L�[�ō���]
			Turn_Left();
			Put_Block();
		}
		if (key == 'e' || key == 'E') {	//E�L�[�ŏI��
			break;
		}
		if (key == 'r' || key == 'R') { //L�L�[�ō���]
			Turn_Right();
			Put_Block();
		}
	}
}

//��ʂɃu���b�N���o��
void Put_Block(void)
{
	int i, j;

	system("cls");//��ʃN���A

	//�u���b�N�̕\��
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4;j++) {
			if (b[i][j]) {
				printf(" ��"); //�����Ƃ��܂������Ȃ��̂Ŏl�ő�p
			}
			else {
				printf("�@");
			}
		}
		printf("\n");
	}
}

//�u���b�N������]
void Turn_Left(void)
{
	int i, j,w[4][4];
	
	//�u���b�N�f�[�^�R�s�[
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			w[i][j] = b[i][j];
		}
	}
	//����]
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			b[i][j] = w[j][3-i];
		}
	}
}
//�u���b�N���E��]
void Turn_Right(void)
{
	int i, j, w[4][4];

	//�u���b�N�f�[�^�R�s�[
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			w[i][j] = b[i][j];
		}
	}
	//�E��]
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			b[i][j] = w[3-j][i];
		}
	}
}

