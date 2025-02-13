#include<stdio.h>
#include<ctype.h>
int main(){
    char b;
    scanf("%c",&a);
    if ((b=='a') || (b=='e') || (b=='i') || (b=='o') || (b=='u')){
        printf("Vowel");
    }
    else if(is digit(b)){
        printf("Digit");
    }
    else{
        printf("Special character");
    }
    return 0;

}