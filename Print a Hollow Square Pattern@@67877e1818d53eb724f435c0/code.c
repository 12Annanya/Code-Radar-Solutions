#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    centre=n/2 +1;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if(j==centre)
            printf("");
            else
            printf("*");
        }
        printf("\n");
    }
    return 0;
}