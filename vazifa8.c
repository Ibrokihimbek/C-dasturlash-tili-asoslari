//matritsa elementlari orasida max gacha nechta son borligini aniqlash.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(0));
    int n, max, a = -1, k = 0;
    scanf("%d", &n);

    int A[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = rand()% 26 - 5;
            printf("%2d ", A[i][j]);
            a++;
            if (i == 0 && j == 0)
            {
                max = A[i][j];
            }
            if (max < A[i][j])
            {
                max = A[i][j];
                k = a;
            }
        }
        printf("\n");
    }
    printf("Max %d\n", max);
    printf("Maxgacha %d ta son bor\n", k);
    return 0;
}
