#include<stdio.h>
#include<time.h>
struct pair{
    int min;
    int max;
};
struct pair findminmax(int arr[],int low,int high){
    struct pair result,left,right;
    if(low==high){
        result.min=arr[low];
        result.max=arr[low];
    return result;
    }
    if(high==low+1){
        if(arr[low]<arr[high]){
            result.min=arr[low];
            result.max=arr[high];
        }
        else{
            result.min=arr[low];
            result.max=arr[low];
        }
        return result;
    }
    int mid=(low+high)/2;
    left=findminmax(arr,low,mid);
    right=findminmax(arr,mid+1,high);
    result.min=(left.min<right.min)?left.min:right.min;
    result.max=(left.max>right.max)?left.max:right.max;
    return result;
}
int main(){
    int n,i;
    printf("Enter number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter elements:\n");
for (i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
clock_t start=clock();
struct pair result=findminmax(arr,0,n-1);
clock_t end=clock();
double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
printf("Minimum element: %d\n", result.min);
printf("Maximum element: %d\n", result.max);
printf("Execution time: %f seconds\n", time_taken);
return 0;

}