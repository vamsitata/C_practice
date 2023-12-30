#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    printf("Enter the sides of triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    int s=(a+b+c)/2;5
    int area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle:%d",area);
}