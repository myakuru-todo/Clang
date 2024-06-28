#include <stdio.h>

main()
{
	int s,i, d[10+1] = { 10,5,30,77,16,3,47,29,37,33,55 };
	printf("探索値sを入力");
	scanf("%d", &i);
	i = 0;
	s = 0;

	//番兵仕込む
	d[10] = s;

	for(i=0;s!=d[i];i++) {}

	if (i >= 10) {
		printf("見つからなかった");

	}
	else {
		printf("配列の%d行目に見つかった",i);
	}
}