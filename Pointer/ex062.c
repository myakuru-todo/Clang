#include <stdio.h>

main()
{
	char* p = "peach";
	char data1[10] = "banana", * pd1;
	char data2[10], * pd2;
	pd1 =data1;
	pd2 = data2;
	
	while (*pd2++ = *pd1++) 
	{
		
	}
	pd1 = data1;//�������O�ɍ��s���Ă邩��A0�ɖ߂����߂ɂ��ꂢ��Ă�B
	
	while (*pd1++ = *p++) 
	{
		
	}
	printf("data[]=%s\n", data1);
	printf("data[]=%s" ,data2);

}