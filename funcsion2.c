#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void son(int A[], int n)
{
	srand(time(0));
	int k, a, b, max = 0;;
	for(int i = 0; i < n; i++){
		A[i] = rand() % 3 + 1;
		printf("%d ", A[i]);
	}
	printf("\n");
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				if(A[i] > A[j]){
				k = A[i];
				A[i] = A[j];
				A[j] = k;
				}
			}
		}
		a = 1; b = A[0];
		for(int i = 1; i < n; i++){
			if(b == A[i]){
			a++;
			}
			else{
				if(a > max) max = a;
				a = 1;
				b = A[i];
			}
		}
		if(a > max) max = a;
		b = A[0];
		k = 1;
		for (int i = 1; i < n; i++)
		{
			if (A[i] == b)
			{
				a++;
			}
			else
			{
				if (a == max)
				{
					printf("%d ",b);
				}
				b = A[i];
				a = 1;
			}
		}
		if (a == max)
		{
			printf("%d ",b);
		}
		printf("\n");
}
int main(){
	int n;
	scanf("%d", &n);
	int A[n];
	son(A,n);
return 0;
}
