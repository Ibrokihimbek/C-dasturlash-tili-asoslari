//massiv elementlari orasida maxdan kegin nechta son borligini aniqlash.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(0));

    int n,max,index;
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        A[i] = rand()% 10 +1;
        printf("%d ", A[i]);
    }
    max = A[0];
    for (int i = 0; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
            index = i;
        }
        
    }
    index = index + 1;
    printf("\nmax dan kegin %d ta son bor\n", n - index);
    
    return 0;
}