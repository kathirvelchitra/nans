# nans
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the values");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>b&&a>c)
{
printf("a is big");
}
if(b>a&&b>c)
{
printf("b is big");
}
if(c>a&&c>b)
{
printf("c is big");
}
return 0;
}
