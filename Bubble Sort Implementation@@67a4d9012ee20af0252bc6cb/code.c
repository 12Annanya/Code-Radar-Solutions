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
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    scanf("%d",&arr[i]);
   
}