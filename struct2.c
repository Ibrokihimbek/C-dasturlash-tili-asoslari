#include <stdio.h>
#include <stdlib.h>

struct time{
    int soat;
    int minut;
    int sekund; 

}
;
void soat(){

}

int main(){
    struct time vaqt[3];

    for (int i = 0; i < 2; i++)
    {
        printf("%d - vaqt parametorlarini kiriting\n\n", i + 1);
        printf("Soat, minut, sekund: "); scanf("%d %d %d",&vaqt[i].soat, &vaqt[i].minut, &vaqt[i].sekund);
        printf("\n");
    }
        vaqt[2].sekund = vaqt[0].soat * 3600 - vaqt[1].soat * 3600 + vaqt[0].minut * 60 - vaqt[1].minut * 60 + vaqt[0].sekund - vaqt[1].sekund;
        vaqt[2].soat = vaqt[2].sekund / 3600;
        vaqt[2].minut = vaqt[2].sekund % 3600 / 60;
        vaqt[2].sekund = vaqt[2].sekund % 60;
        printf("\nKiritilgan vaqtlar orasidagi farq: %2d:%2d:%2d\n",vaqt[2].soat, vaqt[2].minut, vaqt[2].sekund);
    
        printf("\n");
    return 0;
}