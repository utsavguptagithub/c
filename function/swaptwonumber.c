#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the number a:-");
    scanf("%d",&a);
    printf("Enter the number b :-");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",b);
    return 0;

}