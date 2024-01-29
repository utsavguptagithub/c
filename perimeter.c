#include<stdio.h>
int main()
{
    int l,b;
    printf("enter the length : ");
    scanf("%d",&l);
    printf("enter the breadth :");
    scanf("%d",&b);
    int a=l*b;
    int p=2*(l+b);
    if(a>p){
        printf("area is greater than premiter");
    }
 else{
    printf("area is lesser than the perimeter");
 }
}