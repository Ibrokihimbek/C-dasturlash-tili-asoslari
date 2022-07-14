#include <stdio.h>
#include <stdlib.h>

int main(){

    int *A = (int*) malloc(2 *sizeof(int));
    printf("kun va oy kiriting: ");
    for(int i = 0; i < 2; i++)
        scanf("%d", A + i);

    if(*A > 31 || *A < 1 || *(A+1) > 12 || *(A+1) < 1)    
        printf("Error\n");
    else{
        switch (*(A + 1))
        {
        case 1: case 2:   case 12:  printf("Qish\n");  break;
        case 3: case 4:   case 5:   printf("Bahor\n"); break;
        case 6: case 7:   case 8:   printf("Yoz\n");   break;
        case 9: case 10:  case 11:  printf("Kuz\n");   break;    
        }
    }    
    return 0;
}