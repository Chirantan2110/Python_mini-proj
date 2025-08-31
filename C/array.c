#include<stdio.h>
int main()
{
    float price[3];
    printf("enter the 1st price:\n");
    scanf("%f",&price[0]);
    printf("enter the 2nd price:\n");
    scanf("%f",&price[1]);
    printf("enter the 3rd price:\n");
    scanf("%f",&price[2]);
    printf("the 1st final cost:%.2f\n",price[0]+(0.18*price[0]));
    printf("the 2nd final cost:%.2f\n",price[1]+(0.18*price[1]));
    printf("the 3rd final cost:%.2f\n",price[2]+(0.18*price[2]));
    return 0;
}