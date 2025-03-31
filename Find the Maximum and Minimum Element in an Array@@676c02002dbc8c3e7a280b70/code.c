#include<stdio.h>
int main(){
    int n[100],m[100];
    scanf("%d%d",&n,&m);
    if(n<m){
        printf("%d",n);
    }
    else{
        printf("%d",m);
    }
    return 0;
}