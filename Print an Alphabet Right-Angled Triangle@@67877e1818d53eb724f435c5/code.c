#include<stdio.h>
int main(){
    int n;
    scanf("%c",&n);
    for(char i=1;i<=n;i++){
        for(char j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}