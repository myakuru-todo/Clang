#include <stdio.h>
#include <stdlib.h>
#include<time.h>

main()
{
	int kazu;
	
		srand(time(0));
		rand();
		kazu = rand() % 100 + 1;
		if(kazu >= 70){
			
			printf("��S�̈ꌂ%d", kazu);
		}
		else 
			printf("�ʏ�U��%d", kazu);
	
	

}