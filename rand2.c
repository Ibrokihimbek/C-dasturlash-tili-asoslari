#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(0));

		int n,a,min,max;
		scanf("%i", &n);
		a = rand() % 10 +1;
		printf("son - %i  ",a);
		min = a;
		max = a;
		for(int i = 1; i < n; i++){
			a = rand() % 10;
			printf("son - %i  ",a);
			if(a < min){
				min = a;
			}
			if(a > max){
				max = a;
			}
		}
		printf("\n %i %i\n\n",min,max);
  return 0;
}
