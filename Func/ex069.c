#include <stdio.h>

main()
{
	int data,sum=0,cnt=0;
	int ret;
	printf("����");
	ret = scanf("%d", &data);
	while (ret != EOF) {/*�f�[�^�̓��͊��� ctrl + z*/
		
		sum+=data;
		cnt++;
		 /*����*/
		printf("����");
		ret = scanf("%d",&data);
	}
	printf("���v%d", sum);
	printf("����%.2f",(float) sum / cnt);
}