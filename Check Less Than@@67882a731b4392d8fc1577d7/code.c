#include<stdio.h>
int main(){
    int a,b;
    if ((a<b) && (a>b)) {
    printf("True\n");
    }
    else if((b>a) && (b<a)) {
        printf("True\n");
    }
    else{
        printf("False");
    }
}