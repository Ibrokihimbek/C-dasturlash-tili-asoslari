/*char seriyani scanf orqali kiriting va harf, raqam va probellardan
boshqa belgilar soni nechtaligini aniqlang.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char A[100];
	int p = 0, res = 0;
	fgets(A, sizeof(A), stdin);
		while(A[p] != '\0'){
			if(ispunct(A[p])){
			res++;
			}
		p++;
		}
	printf("Mahsus belgilar soni %d ta\n", res);
return 0;
}
