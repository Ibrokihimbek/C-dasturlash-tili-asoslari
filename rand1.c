#include<stdio.h>

int main(){

	int n, i = 2;
	scanf("%i", &n);
		while(i < n){
		i++;
			if(n % i == 0){
				printf("Tub son emas\n"); break; 
			}
				if (n % i != 0){ 
					printf("Tub son\n"); break; 
				}
		}
return 0;
}
