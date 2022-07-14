#include <stdio.h>
#include <stdlib.h>

int main(){
    
	int n, j;
    scanf("%d", &n);
    int *A = (int*) malloc(n * sizeof(int));
    
    		for(int i = 0; i < n; i++)
		    scanf("%d",&A[i]);

        j = 0;
        for (int i = 0; i < n; i++)
        {
            if (*(A + i) > 0)
            {
                if (i != j)
                {
                int k = *(A + i);
                *(A + i) = *(A + j);
                *(A + j) = k;
                }
                j++;
                
            }
            
        }
        for(int i = 0; i < n; i++){
            printf("%d ",*(A + i));
        }
        
        printf("\n\n\n");
        

    return 0;
}