#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if ((a % 400== 0) || (a % 4==0 )){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}