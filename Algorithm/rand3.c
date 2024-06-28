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
			
			printf("‰ïS‚ÌˆêŒ‚%d", kazu);
		}
		else 
			printf("’ÊíUŒ‚%d", kazu);
	
	

}