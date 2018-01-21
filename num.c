#nans
#include <stdio.h>
int main()
{
    int base, exp;
    long long power = 1;
    int i;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    for(i=1; i<=exp; i++)
    {
        power = power * base;
    }

    printf("%d", base, exponent, power);
}
