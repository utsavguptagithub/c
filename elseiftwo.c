//write a program to find all the program fall on the same line
#include<stdio.h>
int main()
{
    double x1,x2,x3,y1,y2,y3;
    double m1,m2;
    printf("Enter the first number (x1,y1) \n");
    scanf("%f%f",&x1,&y1);
    printf("Enter the first number (x2,y2)\n");
    scanf("%f%f",&x2,&y2);
    printf("Enter the first number (x3,y3)\n");
    scanf("%f%f",&x3,&y3);
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    if(m1==m2){
        printf("slope lies on the same line");
    }else{
        printf("the slope does not lies on the same line");
    }
    


    
}