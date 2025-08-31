//using 3rd variable
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter one num");
    scanf("%d",&a);
    printf("enter sec num",&b);
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("enter one num:%d",a);
    printf("enter sec num:%d",b);
    return 0;
}
//without using 3rd variable.....(by using + &-)
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter one num");
    scanf("%d",&a);
    printf("enter sec num",&b);
    scanf("%d",&b);
    a=a+b;   //by using *&/
    b=a-b;/*a=a*b;b=a/b;b=a/b;*/
    a=a-b;
    printf("enter one num:%d\n",a);
    printf("enter sec num:%d",b);
    return 0;
}


//3rd method---
#include<stdio.h>
int main(){
    int a,b;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    a=b^a;
    b=a^b;
    a=a^b;
    printf("a is%d\n",a);
    printf("b is%d",b);
}


//swapping using pointers

#include<stdio.h>
int swap(int *x,int *y);
int main(){
  int a,b,temp;
  printf("enter a:");
  scanf("%d",&a);
  printf("enter b:");
  scanf("%d",&b);
swap(&a,&b);

  printf("a is:%d\n",a);
  printf("b is:%d",b);
    return 0;
  
}
int swap(int *x,int *y){
   *x=*x+*y;
   *y=*x-*y;
   *x=*x-*y;
//    printf("*x is %d\n",*x);
//    printf("*y is %d",*y);

    return *x,*y;

}
