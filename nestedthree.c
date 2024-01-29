//take 3 positive integer input and print the greatst of them by nested loop
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the seond number :");
    scanf("%d",&b);
    printf("enter the third number :");
    scanf("%d",&c);
    if(a>b){  //b is out
      if(a>c)
      printf("%d is greatest ", a);
      
    }
       if(b>c){
     if(b>a)
        printf("%d is greatest ",b);
       }
       else 
       printf("%d is greatest ",c);
}