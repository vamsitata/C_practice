#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the sides of triangle:");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b==c){
        printf("It is Equilateral Triangle");
    }else if(a==b || b==c || c==a){
         printf("It is isocelles Triangle");
    }else if(a!=b!=c) {
        printf("It is scalene Triangle\n");
    }
    if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b){
        printf("It is right angle Triangle");
    }
}