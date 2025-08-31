#include<stdio.h>
int factorial(int x);
int main(){
    int n,r;
    printf("enter n");
    scanf("%d",&n);
   // printf("enter r");
    //scanf("%d",&r);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            int ncr=factorial(i)/(factorial(j)*factorial(i-j));
            printf("%d\t",ncr);
        }
        printf("\n");
    }
    return 0;
}
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact*=i;
    }
    return fact;
}