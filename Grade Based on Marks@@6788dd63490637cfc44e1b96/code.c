#include<stdio.h>
int main(){
    char a,b,c,d,f;
    scanf("%c%c%c%c%c",&a,&b,&c,&d,&f);
    if (a>=90){
        printf("A");
    }
    else if(80<=a<90){
        printf("B");
    }
    else if(70<=a<80){
        printf("C");
    }
    else if(60=<a<70){
        printf("D");
    }
    else{
        printf("F");
    }
    return 0;
}