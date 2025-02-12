#include<stdio.h>
#include<ctype.h>
int main(){
    int a;
    scanf("%d",&a);
    if(isupper(a)){
    printf("Uppercase");
    }
    else if(islower(b)){
    printf("Lowercase");
    }
    else{
    printf("Not an alphabet");
    }
    return 0;

}