#include <stdio.h>

main() {
	int a = 100, b;//変数の宣言
	int* p_a;//ポインタの宣言
	p_a = &a;//aの住所を入力してるだけ 
	b = *p_a;//p_aの内容はa=100

	printf("a=%d b=%d *p_a=%d\n", a, b, *p_a);
}