#include <stdio.h>
int tub(int n, int i){
	if(i == 1)
	return 1;
	if(n % i == 0)
	return 0;
	return tub(n,i - 1 );
}
int main(){
	int n,p;
	scanf("%d", &n);
	p = tub(n, n / 2);
	if(p == 1)
	printf("Tub son\n");
	else printf("Tub son emas\n");
return 0;
}
