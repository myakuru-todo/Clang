#include <stdio.h>
#include <string.h>
#define CNT 4
main() {
	char* pd[] = {"Proguraming2","Algorthm","Proguraming","C"};
	char* w;
	int i,j;
	for (i = 0; i < CNT-1; i++) 
	{
		for (j = i+1; j<CNT; j++) {
			if (strcmp(pd[i], pd[j]) > 0) 
			{
				w = pd[i];
				pd[i] = pd[j];
				pd[j] = w;
			}
		}
	}
	
	for (i = 0; i < CNT; i++) {
		printf("%s\n", pd[i]);
	}
}