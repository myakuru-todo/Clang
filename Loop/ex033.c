#include <stdio.h>

/*main() {
	int a, b;
	float c;
	printf("����?");
	scanf("%d", &a);


	for (a, b = 0, c = 0; a != -999; c++) {
		b += a;
		printf("�������");
		scanf("%d", &a);

	}
	printf("���v%d", b);
	printf("�ւ�����%.2f", b / c);




	//��{���̖���while���g��.

}
*/
main() {
	int a, b,c;
	printf("���́H");
	scanf("%d", &a);
	b = 0;
	c = 0;
	do {
		b += a;
		printf("���́H");
		scanf("%d", &a);
		
		c++;
	} while (a != -999);
	printf("���v %d\n ���� %.2f", b, (float)b / c);
}
