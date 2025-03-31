#include<stdio.h>
int bubbleSort(int arr[],int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return bubbleSort;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
   
    return 0;
   
}