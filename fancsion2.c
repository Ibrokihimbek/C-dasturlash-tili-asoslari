#include <stdio.h>
#include <string.h>
#include <ctype.h>

void polindrom(char A[], char B[]){
	int i,j;
        for( i = strlen(A) - 2, j = 0; i >= 0, j <= strlen(A) - 2; i--){
                B[j] = A[i];
                j++;
        }
}

int main(){
	char A[100], B[100];
	fgets(A,sizeof(A),stdin);
	polindrom(A,B);
	printf("%s ", B);
	printf("%s\n", strcmp(A, B) == 10? "Yes": "No");
return 0;
}
