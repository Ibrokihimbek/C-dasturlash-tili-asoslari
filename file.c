#include <stdio.h>
#include <stdlib.h>

int main(){
char A[50], B[50], C[50], D[50];
scanf("%s", A);
scanf("%s", B);
scanf("%s", C);
scanf("%s", D);

FILE *out = fopen("1masala.txt","w");

if (out == NULL)
{
    printf("Error!\n");
    exit(1);
}

fprintf(out,"%s\n%s\n%s\n%s\n",A,B,C,D);
fclose(out);

return 0;
}