#include  <stdio.h>

main() {

	int num,i;
	i = 0;               //iは0から始まって、
	printf("数入れて");
	scanf("%d", &num);

	while (i< num) {//０からプラス１ずつ増やすよ。
		//で入力値より多くなったら止まるよ

		
		printf("*");
		i++;//プラス１

	}
	
}