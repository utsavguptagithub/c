#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n%5== 0 || n%3== 0){
        printf("it is divisible by 5 or 3");

    }
    else{
        printf("it is  not divisible by 3 or 5 ");
    }
    return 0;

}