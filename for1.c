#include<stdio.h>

int main(){
	int n;
//	printf("Istalgan son kiriting bu dastur sizga teskari tartibda chiqazib beradi.\n");
	scanf("%i",&n);
	while(n>0){
	printf("%i ", n%10);
	n = n / 10;
}
	printf("\n");
return 0;
}
