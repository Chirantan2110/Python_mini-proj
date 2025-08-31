#include<stdio.h>
int main(){
int a,i,count=0;
printf("enter a number");
scanf("%d",&a);
for(i=2;i<a;i++){
if(a%i==0){
    count++;
    break;
}
 }
if((count==0)&&(a!=1)){
    printf("it is prime");
}
else{
    printf("it is not prime");
}

return 0;
}
/*
# include<stdio.h>
int main(){
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    int i=2;
    while(i<a){
        if(a%i==0){
            printf("not prime");
            return 0;
        }
        i++;
     }
    printf("prime");
            return 0;
    }

*/