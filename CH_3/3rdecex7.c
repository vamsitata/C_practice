#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the angles of triangle:");
    scanf("%d %d %d",&a,&b,&c);
    int sum=a+b+c;
    if(sum==180){
        printf("Traingle is valid");

    }else{
        printf("Traingle is not valid");
    }
}