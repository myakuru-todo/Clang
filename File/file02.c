#include<stdio.h>

main()
{
	FILE* fp;
	char str[256],equip[256];
	int i,lv,hp;
	fp = fopen("file01.txt", "r");
	/*for (i = 0; i < 3; i++)
	{
		fscanf(fp, "%s\n", str);s
	}
	fscanf(fp, "%d%d%s", &lv, &hp, equip);
	printf("lv : %d hp: %d ����:%s\n", lv, hp, equip);*/
	fgets(equip, sizeof(equip), fp);
	printf("%s\n", equip);
	fclose(fp);

}