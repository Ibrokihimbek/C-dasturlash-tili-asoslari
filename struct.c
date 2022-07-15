#include <stdio.h>

struct box{
    int boyi;
    int eni;
    int balandligi;
    int sigim;
}
;
int main(){
    int n,max,min,maxi,mini;
    printf("nechta quti kiritasiz: ");
    scanf("%d",&n);
    struct box quti[n];

    for (int i = 0; i < n; i++)
    {
        printf("%d - quti parametorlarini kiriting: \n",i + 1);
        printf("bo'yi: "); scanf("%d",&quti[i].boyi);
        printf("eni: "); scanf("%d",&quti[i].eni);
        printf("balandligi: "); scanf("%d",&quti[i].balandligi);
        printf("\n");
        quti[i].sigim = quti[i].boyi * quti[i].eni * quti[i].balandligi;
    }
    printf("\n...... Information ......\n\n");

    max = quti[0].sigim;
    min = quti[0].sigim;
    for(int i = 0; i < n; i++)
    {
        if (max < quti[i].sigim)
        {
            max = quti[i].sigim;
            maxi = i;
        }
        if (min > quti[i].sigim)
        {
            min = quti[i].sigim;
            mini = i;
        }
    }

        for (int i = 0; i < n; i++)
        {
            printf("%d - quti.\nboyi: %3d\neni: %3d\nbalandligi: %3d\n\n",i + 1, quti[i].boyi, quti[i].eni, quti[i].balandligi);
        }

        for (int i = 0; i < n; i++)
        {
            printf("Max quti sig'imi: %d\nMin quti sig'imi: %d\n\n", max, min); break;
        }
        
    printf("\n");
    
    return 0;
}