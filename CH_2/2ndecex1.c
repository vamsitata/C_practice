#include <stdio.h>
int main(){
    int n;
    printf("Enter the five digit number: ");
    scanf("%d",&n);
    int sum=0;
    while(n!=0){
        int m=n%10;
        sum=sum+m;
        n=n/10;
    }
    printf("sum of five digit number is:%d",sum);
}