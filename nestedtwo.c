////using nested if else wap to take the positive integer inpup and tell if it is divisible by 5 or 3 but not divisible by 15
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
//     if(n%5==0 || n%3==0){
//         if(n%15!=0){
//     printf("the number is divisible by 5 or 3 but not 15");
//     }
//     else{
//         printf("the number is not divisible by 15");
//  }
//     }
if((n%5==0 || n%3==0) && n%15!=0){
    printf("the number is divisible by 5 or 3 but not 15");
}
 else{
    printf("the number is divisible by 3 or 5");
 }

}
