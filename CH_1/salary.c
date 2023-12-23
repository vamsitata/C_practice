#include <stdio.h>

int main(){
    int bs;
    float da=0.4,ha=0.2;
    printf("Enter the Basic salary: ");
    scanf("%d",&bs);
    float d,h;
    d=bs*da;
    h=bs*ha;
   int g=h+d+bs;
    printf("Your gross salary is: %d",g);
    return 0;
}