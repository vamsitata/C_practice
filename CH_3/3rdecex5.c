#include <stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int sum=0;
    int o=n;
    while(n!=0){
        int m=n%10;
        sum=sum*10+m;
        n=n/10;
    }
    if(o==sum){
        printf("original is equal to reversed");

    }else{
          printf("original is not  equal to reversed");
    }
}