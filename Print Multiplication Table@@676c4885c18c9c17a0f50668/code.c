#include<stdio.h>
int main(){
    int a,multiply=1;
    scanf("%d",&a);
    for(int i=1;i<=10;i++){
        multiply=a*i;
    }
    printf("%d",multiply);
    return 0;
}