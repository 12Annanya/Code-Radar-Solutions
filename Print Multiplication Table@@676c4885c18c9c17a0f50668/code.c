#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=10;i=i+1){
        if(n%i==0)
        printf("%d",i);
        }
    return 0;
}