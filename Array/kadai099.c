#include<stdio.h>
main()
{
    int i,j;
    char moji[100];
    printf("�񐔂ƕ���������   ");
    scanf("%d %s", &i,&moji);
    for (j = 0; j < i; j++) 
    {
        printf(" %s ", moji);

    }
    
    
}