#include <stdio.h>
int main(){
    int n;
    printf("Enter the year:");
    scanf("%d",&n);
    if((n%100!=0 && n%4==0 )|| n%400==0){
        printf("It is leap year");
    }else{
        printf("It is not leap year");
    }
}