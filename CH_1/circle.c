#include <stdio.h>
int main(){
    int l,b,r;
    printf("Enter the lenght and breadth of rectangle:");
    scanf("%d %d",&l,&b);
     printf("Enter the radius of circle:");
     scanf("%d",&r);
     int ra=l*b;
     int rp=2*(l+b);
     float pi=3.14;
     float ca=pi*r*r;
     float cp=pi*r*2;
     printf("Area of rectangle:%d\nPerimeter of rectangle:%d\nArea of circle:%f \nPerimeter of circle: %f",ra,rp,ca,cp);
}