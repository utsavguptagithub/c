#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the cordinate :");
    scanf("%d%d",&x,&y);
    if(x==0 && y==0){
     printf("Lies on the origin");
    }
      else if(x==0 ){
     printf("lies on y-axix");
      }
        else if(y==0){
     printf("Lies on x axis");
         }
         else{
            printf("The point does not lies on x or y axis");
         }
    return 0;
}