//display this ap 1,3,5,7,9.......nterms
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number ");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i=i+2){
        printf("%d\n",i);
    }
}