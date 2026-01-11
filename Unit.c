#include <stdio.h>

int main() 
{
    int n;
    long long S = 0;

    printf("Input n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        S += i;
        printf("Step %d: S = S + %d = %lld\n", i, i, S);
    }

    printf("Final result : S(%d) = %lld\n", n, S);
    return 0;
}
