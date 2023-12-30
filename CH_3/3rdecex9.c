#include <stdio.h>
int main(){
    int l,b;
     printf("Enter the lenght and breadth:");
    scanf("%d %d",&l,&b);
    int a=l*b;
    int p=2*(l+b);
    if(a>p){
        printf("Area of rectangle is greater than perimeter");

    }else{
                printf("Area of rectangle is not  greater than perimeter");
        
    }
}