#include <stdio.h>

int main(){
    int a,b,c,d,e;
    printf("Max marks=100\nEnter the marks obtained in each subject: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    int ag=a+b+c+d+e;
    int p=ag*100/500;
    printf("Agregate marks are: %d\n Percentage marks are:%d",ag,p);
}