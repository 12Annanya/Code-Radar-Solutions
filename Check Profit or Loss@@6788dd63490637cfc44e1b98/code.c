#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if((a>b) || (b>a)){
    printf("Profit");
    }
    else if ((a<b) || (b<a)){
        printf("Loss");
    }
    else{
        printf("No loss");
    }
    return 0;
}
