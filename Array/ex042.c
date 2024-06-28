#include <stdio.h>

main()
{
	char data[6] = "Apple";
	int i;
	i = 0;
	printf("1文字ずつ表示\n");
	for (i = 0; data[i]!='\0'; i++) {
		printf("%c", data[i]);
		
	}
	//printf("\n文字列で表示\n%s",&data[0]);
	//%sのときはアドレスを指定=&必要
	//配列名だけ書くと先頭にアドレスを表す。
	printf("\n文字列で表示\n%s",data+2);
	//これでも動くよ

}