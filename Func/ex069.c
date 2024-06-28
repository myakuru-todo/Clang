#include <stdio.h>

main()
{
	int data,sum=0,cnt=0;
	int ret;
	printf("整数");
	ret = scanf("%d", &data);
	while (ret != EOF) {/*データの入力完了 ctrl + z*/
		
		sum+=data;
		cnt++;
		 /*入力*/
		printf("整数");
		ret = scanf("%d",&data);
	}
	printf("合計%d", sum);
	printf("平均%.2f",(float) sum / cnt);
}