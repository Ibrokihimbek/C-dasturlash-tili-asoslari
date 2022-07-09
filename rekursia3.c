#include <stdio.h>

int son(int n)
{

    if (n > 0)
    {
        return n % 10 + son(n / 10);
    }
        
}
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    printf("%d",son(n));
    printf("\n");
    return 0;
}
