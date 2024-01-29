#include <stdio.h>
int main()
{
    int a, b, c,d;
    printf("Enter the first number \n :");
    scanf("%d", &a);
    printf("Enter the second number \n :");
    scanf("%d", &b);
    printf("Enter the third number \n :");
    scanf("%d", &c);
    printf("Enter the four number \n :");
    scanf("%d", &d);
    if (a > b && b > c && a>d)
    {
        printf("%d is the greatest number",a);
    }
    if (b > a && b>c && b>d)
    {

        printf("% is the the gratest number", b);
    }
    if (c > a && c>b && c>d)
    {

        printf("% is the the gratest number", c);
    }
    if (d > a && c>b && d>a)
    {

        printf("% is the the gratest number", d);
    }
}
