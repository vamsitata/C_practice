#include <stdio.h>
int main(){
    int h=50;
   float c=0.7,t=5600;
    int h1;
    float c1, t1;

    printf("Enter the Hardness: ");
    scanf("%d", &h1);

    printf("Enter the carbon content: ");
    scanf("%f", &c1);

    printf("Enter the Tensile: ");
    scanf("%f", &t1);
    if(h==h1 && c==c1 && t1==t){
        printf("Grade is 10");
    }else if(h1==h && c==c1){
        printf("Grade is 9");
    }else if(c==c1 &&t==t1){
        printf("Grade is 8");
    }else if(h==h1 && t==t1){
        printf("Grade is 7");
    }else if(h==h1 || c==c1 || t==t1){
        printf("Grade is 6");
    }else{
        printf("Grade is 5");
    }

}