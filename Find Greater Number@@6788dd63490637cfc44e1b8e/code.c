#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<b){
        printf("greatest number: %d", b);
    }
    else {
        printf("greatest number: %d", a);
    }
}