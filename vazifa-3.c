#include<stdio.h>

int main(){
	char c;
	printf("Ingiliz tili alifbosidan ixtiyoriy harf kiriting.\n");
	scanf("%c", &c);

	if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'u' || c == 'U'|| c == 'o' || c == 'O') 
		printf("%c unli harf.\n", c);

	else printf ("Undosh harf.\nYoki siz harf o'rniga son yoki belgi kiritdingiz \n");

return 0;
}
