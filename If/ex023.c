#include <stdio.h>

main() {

	int no,a1,a2,a3;
		printf("秒数を入力");
	scanf("%d", &no);
	a1 = (no%3600) / 60;
	a2 = no / 3600;
	a3 = (no%3600) % 60;
		if (5000 >= no) {
      printf("%d時間%d分%d秒",a2,a1, a3);
   }
		else {

			printf("Error");
		}
	
	




}