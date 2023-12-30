#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the numbers:");
    scanf("%d %d %d",&a,&b,&c);
    (a>b && b>c) ? printf("greatest number is %d",a) :
    (b>a && b>c) ? printf("greatest number is %d",b) :
    printf("greatest number is %d",c);
}