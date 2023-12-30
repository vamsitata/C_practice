#include<stdio.h>
int main(){
    char a;
    printf("Enter the letter: ");
    scanf("%s",&a);
    if(a>=65 && a<=90){
        printf("Letter is captial");

    }else if(a>=97 &&a<=122){
        printf("Letter is small");

    }else if(a>=48 && a<=57){
        printf("Letter is numbers");
    }else{
        printf("Letter is special");
    }
}