#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    if(n>80){
        printf("Grade A");
    }
    else if(n>70){
        printf("Grade B");
    }
    else if(n>60){
        printf("Grade c");
    }
    else if(n>50){
        printf("Grade D");
    }
    else{
         printf("Fail");
    }
    return 0;
}
