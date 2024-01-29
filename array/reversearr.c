#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("\nEnter element number %d\n",i+1);
        scanf("%d",&arr[i]);
    }
      for(int j=4;j>=0;j--){
        printf("%d",arr[j]);
      }
     
    // printf("%d",arr[3]);

    return 0;



}