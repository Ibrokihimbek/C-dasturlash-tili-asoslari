#include<stdio.h>

int main(){
	int i,j;
	for(i = 10 ; i <= 100; i++){
		for(j = 2; j <= i; j++){
			if(i % j == 0){
			break;
			}
		}
		if(i == j){
			printf("Ikki xonali tub son %i\n",i);

		}
	}
	printf("\n");
return 0;
}
