// Massiv elementlari orasidan ikkinchi minimum soni chiqazuvchi dastur.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));

    int n;
    scanf("%d",&n);

    int A[n];
    for(int i = 0;i < n; i++){
        A[i] = rand() % 10 + 1;
        printf("%d ",A[i]);
    }
    printf("\n");
    for(int i = 0; i < n; i++){
        int temp;

        for(int j = i + 1; j < n; j++)
        {
            if(A[i] < A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    printf("Second min %d",A[n-2]);
    printf("\n");
return 0;
}
