#include <stdio.h>
int main(){
    int km,m,cm;
    float f,i;
    printf("ENter the kms: ");
    scanf("%d",&km);
    m=km*1000;
    cm=km*100000;
    f=km*3280.84;
    i=km*39370.1;
    printf("KM in meters:%d\ncentimeters: %d \nfeets: %f \ninches: %f",m,cm,f,i);
}