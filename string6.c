//cheksiz soz kiritamiz va biz to'xtaganimizda 5 ta 5ta qilib gap hosil qilsin.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (){
	char A[100], B[20];
	int n = 0, i = 1;
	fgets(B, sizeof(B), stdin);
		while(strlen(B) != 1){
			if(n == 0){
				B[0] = toupper(B[0]);
				n = 1;
			}
			if(i % 5 == 0){
				B[ strlen(B) - 1 ] = '.';
				n = 0;
				strcat(B," ");
			}
			else{
				B[ strlen(B) - 1 ] = ' ';
			}
			strcat(A, B);
			fgets(B, sizeof(B), stdin);
			i++;
		}
			if((i - 1) % 5 != 0){
				A[strlen(A) - 1] = '.';
			}
			printf("%s\n", A);
return 0;
}
