// Eng katta sonlar ko'paytmasini chiqazib beruvchi funksiya

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void katta(int A[6]){
	int k, a, max = 0, index = 0, b, c;
		for(int i = 0; i < 6; i++ ){
                        for(int j = i + 1; j < 6; j++){

                                if(A[i] > A[j]){
                                k = A[i];
                                A[i] = A[j];
                                A[j] = k;
                                }
                        }
                }
                for(int i = 0; i < 6; i++){
                printf("%d ",A[i]);
                }
                printf("\n");
                a = A[4] * A[5];
                printf("%d\n",a);

}

int main(){
	int A[6];
        int k,a;
		printf("6 ta son kiriting bu dastur sizga eng katta sonlar ko'paytmasini chiqazib beradi: \n");
                for(int i = 0; i < 6; i++){
                        scanf("%d", &A[i]);
                }
	katta(A);
return 0;
}
