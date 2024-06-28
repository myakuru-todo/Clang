#include <stdio.h>

/*main() {
	int a, b;
	float c;
	printf("数は?");
	scanf("%d", &a);


	for (a, b = 0, c = 0; a != -999; c++) {
		b += a;
		printf("数入れて");
		scanf("%d", &a);

	}
	printf("合計%d", b);
	printf("へいきん%.2f", b / c);




	//基本この問題はwhileを使う.

}
*/
main() {
	int a, b,c;
	printf("数は？");
	scanf("%d", &a);
	b = 0;
	c = 0;
	do {
		b += a;
		printf("数は？");
		scanf("%d", &a);
		
		c++;
	} while (a != -999);
	printf("合計 %d\n 平均 %.2f", b, (float)b / c);
}
