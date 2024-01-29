#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n%5== 0 && n%3== 0){
        printf("it is divisible by 5");

    }
    else{
        printf("it is  divisible by 321");
    }
    return 0;

}