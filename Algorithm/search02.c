#include <stdio.h>

main()
{
	int s,i, d[10+1] = { 10,5,30,77,16,3,47,29,37,33,55 };
	printf("�T���ls�����");
	scanf("%d", &i);
	i = 0;
	s = 0;

	//�ԕ��d����
	d[10] = s;

	for(i=0;s!=d[i];i++) {}

	if (i >= 10) {
		printf("������Ȃ�����");

	}
	else {
		printf("�z���%d�s�ڂɌ�������",i);
	}
}