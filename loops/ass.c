#include<stdio.h>
int main(){
    int num, digit =0 ,temp,temp1;
    int sum =0 ,product =1, lastdigit;
    printf("Enter the number : ");
    scanf("%d",&num);
    temp = num;
    temp1 = num;
    while(temp!=0){
    digit++;
    temp =temp1 /10;
    
       for (int i = 1; i <= digit; i++) {
        lastdigit = num % 10;
        product =1;
       }
        for (int j = 1; j <= digit; j++) {
            product = product*lastdigit;
        }
          // product = product*lastdigit;
            sum =sum + product;
            num = num / 10;
    }
    if (temp1 == sum) {
        printf("%d is an Armstrong number", temp1);
    }
    else {
        printf("%d is not an Armstrong number", temp1);
    }

    return 0;
    

}