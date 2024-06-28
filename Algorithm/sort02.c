#include <stdio.h>

main()
{
	int i, j, w, d[10] = { 30,7,25,16,10 };
	for (i = 4; i >0; i=i-1) {

		for (j = 0; j < i; j++) {
			if (d[j] > d[j + 1]) {
				w = d[j];
				d[j] = d[j + 1];
				d[j+1] = w;
			}

		}
	}
	for (j = 0; j < 5; j++) {
		printf(" %d ", d[j]);
	}

}