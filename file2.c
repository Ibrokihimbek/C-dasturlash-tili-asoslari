#include <stdio.h>
#include <stdlib.h>

int main(){
 
    FILE *in = fopen("2masala.txt","r"); 
    FILE *out = fopen("2masalaNew.txt","w");
    
    int a, b, c, d, e, n = 0;
    
    if (in == NULL)
    {
        printf("Error!\n");
        exit(1);
    }

        fscanf(in,"%d %d %d %d %d",&a, &b, &c, &d, &e);

    n = a + b + c + d + e;
   
    fprintf(out,"%d",n);
 
    fclose(in);
    fclose(out);
    return 0;
}