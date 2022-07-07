#include <stdio.h>

void star(int A[][10], int n){
		int k = n - 1;
                for(int i = 0; i < n; i++){
                        for(int j = 0; j < n; j++){
                        if(j == k) printf(" +");
                        else printf(" *");
                        }
                printf("\n");
                k--;
                }
}

int main(){
	int n,k;
	scanf("%d", &n);
	int A[n][n];
	star(A,n);
return 0;
}
