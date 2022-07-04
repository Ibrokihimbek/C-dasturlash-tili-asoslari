//matritsaning qatorlari elementlarini ustunlari elementlari bilan almashtirish.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int n,k,i,j;
	scanf("%d", &n);
	int A[n][n];
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			A[i][j] = rand() % 10 + 1;
				printf("%2d ",A[i][j]);
		}
	printf("\n");
	}
	printf("\n");
	for(i = 0; i < n; i++){
                for(j = 0; j < n; j++){
		printf("%2d ",A[j][i]);
		}
	printf("\n");
	}
	printf("\n");
return 0;
}
