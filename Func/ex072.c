#include <stdio.h>
void display(int a);   /*プロトタイプ宣言*/
int main(void)
{
	int a;
	printf(" data ?: ");
	scanf(" %d", &a);
	display(a);   /*display関数の呼び出し*/

}
/*関数displayの記述*/
void display(int a)
{
	printf("入力データ= %d\n", a);
	return;
}