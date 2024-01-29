
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the year:");
    scanf("%d",&n);
    if(n%4==0){
        printf("is a leap year");
    }
    else{
        printf("not a leap year");
    }
}
 