#include<stdio.h>
main() {
    int max_score, score = 0;
    char max_name[20];
    char ch;
    char name[20];
    FILE* fp;
    fp = fopen("score.txt", "r");
    fscanf(fp, "%s%d", max_name, &max_score);
    fclose(fp);
    printf("最高特典 name;%s score:%d\n", max_name, max_score);
    //プレイや名の入力
    printf("プレイヤーの名前は:");
    scanf("%s", name);
    while (1) {
        printf("現在のスコア:%d(Enterでスコア+1,eで終了)\n", score);
        ch = getch();
        if (ch == 'e') {
            break;
        }
        //スコアかさん
        score++;
    }
    if (score > max_score) {

        //ファイルscore.txtへの書き込み
        //1ファイルオープン
        fp = fopen("score.txt", "w");
        //2 ファイルへのnameとscoreの表示
        fprintf(fp, "%s\n%d\n", name, score);
        //3ファイルをくろーず
        fclose(fp);
    }
}