#include<stdio.h>
int main(){
    int marks[10] ={70,77,88,98,67,31,100,51,21,92};
    for(int i=0;i<10;i++){
        if(marks[i]<35)
        printf("%d ",marks[i]);
    }
         return 0;
}