#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int kazu;
	
	srand(time(0));
	rand();
	kazu = rand()%889+111;
	printf("発生した数は%dです。\n", kazu);

}