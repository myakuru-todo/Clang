#include <stdio.h>

#define STACKSIZE 8
void display(void);
int  stack[STACKSIZE];
int sp = 0;

main() 
{

	int key, data, result;
	do {

		printf("\n\n*プッシュはi、ポップはoを入力して");
		key = getche();
		printf("\n");
		if (key == 'i') {
			printf("データ入力>");
			scanf("%d", &data);
			result = push(data);
			if (result == -1) {
				printf("\n****スタックがいっぱいです*****\n");
			}
			else
			{
				display();
			}
		}
		if (key == 'o')
		{
			result = pop(&data);
			if (result == -1) {
				printf("\n****スタックがいっぱいです*****\n");
			}
			else {
				printf("スタックからデータ(%d)を取り出しました\n", data);
				display();
			}
		}
		
	} while (key != 'e');
}

void display(void)
{
	int i;
	printf("\n===現在のスタックの内容===\n");
	for (i = 0; i < STACKSIZE; i++) {
		printf("stack[%2d]は%5d", i, stack[i]);
		if (i == sp) {
			printf("←spが示しているところは(現在spは%d)", sp);
		}
		printf("\n");
	}
	return;
}
//プッシュ関数
int push(int d)
{
	if (sp >= STACKSIZE) { return -1; }
	stack[sp] = d;//スタックにdを追加
	sp++;         //ｓｐをインクリメント 
	return 0;
}
//ポップ関数
int pop(int* pd)
{
	if (sp <= 0) { return -1; }
	*pd = stack[sp];//スタックからデータ‐を取り出してpd番地の中身にいれる
	stack[sp] = 0;
	return 0;
}