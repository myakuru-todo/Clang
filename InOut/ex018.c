#include <stdio.h>

main() {

	int a, b,c,g;
	printf("整数を3こ入力");
	scanf("%d%d%d",&a, &b,&c);

	g =a+b+c;
	printf("合計%d\t平均%.2f",g,g/ 3.0);

}//\tは位置あわせ