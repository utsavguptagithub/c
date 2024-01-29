//using ternary operator print number is odd or even
#include<stdio.h>
int main()
{
    int n;
    printf("Emter the number :");
    scanf("%d",&n);
    n%2==0 ? printf("even number ") : printf("Odd number");
    return 0;
}