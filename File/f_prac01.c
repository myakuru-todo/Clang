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
    printf("�ō����T name;%s score:%d\n", max_name, max_score);
    //�v���C�▼�̓���
    printf("�v���C���[�̖��O��:");
    scanf("%s", name);
    while (1) {
        printf("���݂̃X�R�A:%d(Enter�ŃX�R�A+1,e�ŏI��)\n", score);
        ch = getch();
        if (ch == 'e') {
            break;
        }
        //�X�R�A������
        score++;
    }
    if (score > max_score) {

        //�t�@�C��score.txt�ւ̏�������
        //1�t�@�C���I�[�v��
        fp = fopen("score.txt", "w");
        //2 �t�@�C���ւ�name��score�̕\��
        fprintf(fp, "%s\n%d\n", name, score);
        //3�t�@�C��������[��
        fclose(fp);
    }
}