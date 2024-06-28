#include <stdio.h>

main() {

	int a;
	printf("西暦を入力 :");
	scanf("%d", &a);
	
	//                かつ　　　　　  または
		if (a % 4 == 0 && a % 100 !=0 || a % 400 == 0) {

			printf("閏年");
		}
		else {

			printf("閏年ではない.");
		}
// && ||これの使い方をマスターしよう。
}