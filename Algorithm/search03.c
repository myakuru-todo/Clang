#include <stdio.h>

main()
{
	int low, high, mid, s,i;
	int d[10 + 1] = { 10,15,18,23,28,35,47,55,69,78,99 };
	printf("�T���ls�����");
	scanf("%d", &s);
	low = 0;
	high = 10;
	for (i = 0; low <= high;i++) {
		mid = (low + high)/ 2;
		
		if (s == d[mid]) 
			break;
	
		if (s > d[mid]) 
		{
			low = mid + 1;;
		}
		if (s < d[mid]) 
		{
			high = mid - 1;
		}
	}
	if (low > high) {
		printf("�݂���Ȃ�����");
	}
	else {
		printf("�z���%d�s�߂Ɍ�������",mid);
	}

}