#include<stdio.h>
int main(){
	int a;
	printf("2022 yildagi kerakli oyning taqvimdagi sonini kiriting\n");
	scanf("%d" ,&a);
	if (a == 1) 
	printf("Yanvar oyi 31 kundan iborat\n");
	else if (a == 2)
	printf("Fevral oyi 28 kundan iborat\n");
	else if (a == 3)
        printf("Mart oyi 31 kundan iborat\n");
	else if (a == 4)
        printf("Aprel oyi 30 kundan iborat\n");
	else if (a == 5)
        printf("May oyi 31 kundan iborat\n");
       	else if (a == 6)
        printf("Iyun oyi 30 kundan iborat\n");
        else if (a == 7)
        printf("Iyul oyi 31 kundan iborat\n");
        else if (a == 8)
        printf("Avgust oyi 31 kundan iborat\n");
        else if (a == 9)
        printf("Sentabr oyi 30 kundan iborat\n");
        else if (a == 10)
        printf("Oktabr oyi 31 kundan iborat\n");
        else if (a == 11)
        printf("Noyabr oyi 30 kundan iborat\n");
        else if (a == 12)
        printf("Dekabr oyi 31 kundan iborat\n");
	else printf("2022 yilda bunday oy mavjud emas\n");
return 0;
}
