#include <stdio.h>

main() {

	int no,a1,a2,a3;
		printf("�b�������");
	scanf("%d", &no);
	a1 = (no%3600) / 60;
	a2 = no / 3600;
	a3 = (no%3600) % 60;
		if (5000 >= no) {
      printf("%d����%d��%d�b",a2,a1, a3);
   }
		else {

			printf("Error");
		}
	
	




}