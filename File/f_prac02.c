#include<stdio.h>

main()
{
	int score = 0;
	char ch;
	char name[20];
	FILE* fp;
	printf("�v���C���[�̖��O��");
	scanf("%s", name);
	while (1) {
		printf("���݂̃X�R�A:%d(enter�ŃX�R�A+1,e�ŏI��)\n",score);
		ch = getch();
		if (ch == 'e') {
			break;
		}
		score++;
	}
	//�t�@�C��score.txt�ւ̏�������
	fp = fopen("srore.txt","w");
	fprintf(fp, "%s\n%d\n", name, score);
}