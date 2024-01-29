//display the tables inpt by the user
#include<stdio.h>
int main()
{
    int n,i,table;
    printf("Emter the number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        table=n*i;
        printf("%d\n",table);
    }
    printf("%d",i);
}