#include <stdio.h>

main()
{
	char data[6] = "Apple";
	int i;
	i = 0;
	printf("1�������\��\n");
	for (i = 0; data[i]!='\0'; i++) {
		printf("%c", data[i]);
		
	}
	//printf("\n������ŕ\��\n%s",&data[0]);
	//%s�̂Ƃ��̓A�h���X���w��=&�K�v
	//�z�񖼂��������Ɛ擪�ɃA�h���X��\���B
	printf("\n������ŕ\��\n%s",data+2);
	//����ł�������

}