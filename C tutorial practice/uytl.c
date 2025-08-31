#include<stdio.h>
void pattern1();
void pattern2();
int main(){
pattern1();
pattern2();

}
void pattern1(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i+1;j++){
            printf("*");
        }
        printf("\n");
    }
}
void pattern2(){
    for(int i=0;i<=5;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}