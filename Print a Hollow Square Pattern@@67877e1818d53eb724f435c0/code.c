#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
     int centre=j/2 +1;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if(j==centre || i==centre)
            printf("");
            else
            printf("*");
        }
        printf("\n");
    }
    return 0;
}