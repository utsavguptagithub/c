#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first number \n :");
    scanf("%d",&a);
    printf("Enter the second number \n :");
    scanf("%d",&b);
    printf("Enter the second number \n :");
    scanf("%d",&c);
    if (a > b && b > c)
    {
        printf("%d is the greatest number",a);
    }
    if (b > a && b>c)
    {

        printf("% is the the gratest number", b);
    }
    if (c > a && c>b)
    {

        printf("% is the the gratest number", c);
    }
}
