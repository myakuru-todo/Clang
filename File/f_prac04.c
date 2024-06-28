#include<stdio.h>
#define Sol_Num 3
typedef struct {
    char Wname[20];
    int bullet;
    float atk;
} Weapon;
typedef struct {
    char name[20];
    int hp;
    Weapon wpn;
} Soldier;
void SetInfo(Soldier* s, char* filename);
void Display(Soldier *s);
main()
{
    Soldier sols[Sol_Num];
    SetInfo(sols, "file04.txt");
    Display(sols);
}
void SetInfo(Soldier* s, char* filename) 
{
    FILE* fp;
    
        if (fp = fopen(filename, "r")) {
            int i;
            for ( i = 0; i < 3; i++) {
                fscanf(fp, "%s%d%s%d%f", (s+i)->name, &(s+i)->hp, (s+i)->wpn.Wname, &(s+i)->wpn.bullet, &(s+i)->wpn.atk);
            }                          //�擪�A�h���X�𑫂��Ă�����������+i��0.1.2.���ăO���O�������Ă�
        }
        fclose(fp);
}
void Display(Soldier *s) 
{
    int i;
    for ( i = 0; i < 3; i++) {
        printf("%s �̗�:%d\n", (s+i)->name, (s+i)->hp);
        printf("����:%s �e��:%d �U����:%.2f\n", (s+i)->wpn.Wname, (s+i)->wpn.bullet, (s+i)->wpn.atk);
    }
}