//using nested if else wap to take the positive integer inpup and tell if it is divisible by 5 or 3

#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n%5==0){
        if(n%3==0){
            printf("the number is divsible by 5 and 3");
            }
    }
    else {
        printf("the number is not divisble by 5 and 3");
    }
    return 0;

}