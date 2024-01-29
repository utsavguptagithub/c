 #include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the age of ram \n :");
    scanf("%d", &a);
    printf("Enter the age of shyam \n :");
    scanf("%d", &b);
    printf("Enter the age of ajay \n :");
    scanf("%d", &c);
    if (a < b && b < c)
    {
        printf("%d is the age of ram",a);
    }
    if (b < a && b<c)
    {

        printf("% is the age of shyam", b);
    }
    if (c < a && c<b)
    {

        printf("% is the  age of ajay", c);
    }
}

 




