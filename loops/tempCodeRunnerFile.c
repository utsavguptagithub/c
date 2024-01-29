#include<stdio.h>
int main() {
    int num, numOfDigit = 0, temp, temp1;
    int sum = 0, product = 1, lastDigit;
    printf("Enter a number: ");
    scanf("%d", &num);
    //  First to find the number of digits
    temp = num;
    temp1 = num;
    while (temp != 0) {
        numOfDigit++;
        temp = temp / 10;
    }
    
    for (int i = 1; i <= numOfDigit; i++) {
        lastDigit = num % 10;
        product = 1;
        for (int j = 1; j <= numOfDigit; j++) {
            product = product * lastDigit;
        }
        
        sum = sum + product;
        
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