#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the number:-\n");
    scanf("%d",&n);
    int r;
    printf("Enter r:-");
    scanf("%d",&r);
    int nfact =1;
    int rfact=1;
    int nrfact=1;

    for(i=2;i<=n;i++){
        nfact =nfact*i;
    }
     for(i=2;i<=r;i++){
        rfact =rfact*i;
    }
     for(i=2;i<=n-r;i++){
        nrfact =nrfact*i;
    }
    int ncr = nfact/(rfact*nrfact);
    printf("%d",ncr);





    return 0;

}
