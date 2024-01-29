#include<stdio.h>
int main()
{
    int sp,cp;
    printf("Entet the cost price : ");
    scanf("%d",&cp);
   printf("Entet the selling price : ");
    scanf("%d",&sp);
    if(sp>cp){
        printf("profit");
    }
    if(cp>sp){
        printf("loss");
    }
    if(sp==cp){
        printf("no profit,no loss");
    }

}