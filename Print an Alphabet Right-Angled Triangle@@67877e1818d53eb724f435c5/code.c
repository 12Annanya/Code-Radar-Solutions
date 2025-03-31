#include<stdio.h>
int main(){
    int n;
    scanf("%c",&n);
    for(char i=A;i<=n;i++){
        for(char j=A;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}