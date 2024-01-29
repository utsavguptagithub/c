 #include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the first side \n :");
    scanf("%d", &a);
    printf("Enter the second side \n :");
    scanf("%d", &b);
    printf("Enter the third side \n :");
    scanf("%d", &c);
    if (a + b>c && b + c>a && c+a>b)
    {
        printf("valid triangle");
    }
    else{
        printf("non valid triangle");
    }
}  




