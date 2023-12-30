#include <stdio.h>
int main(){
    int cp,sp;
    printf("Enter the celling price and selling price:");
    scanf("%d %d",&cp,&sp);
    int t=sp-cp;
    if(t>0){
        printf("Your profit is %d",t);
    }else{
        printf("Your loss is %d",t);
    }
}