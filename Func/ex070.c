#include <stdio.h>
int add(int a, int b);/*�v���g�^�C�v�錾*/

main()
{
	int a, b, kotae;
	printf("������2����:");
	scanf("%d%d",&a,&b);
	kotae = add(a, b); /*�֐�add�̌Ăяo��*/
	printf("���v��%d�ł�\n", kotae);

}
/*�֐�add�̋L�q*/
int add(int a, int b)
{
	int ans;
	ans = a + b;
	return ans;
}