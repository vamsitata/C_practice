#include <stdio.h>

int main(){
    int d1=1189,d2=841;
    for(int i=0;i<=8;i++){
        printf("A%d is %d x %d\n",i,d1,d2);
        int t=d1;
        d1=d2;
        d2=d1/2;
    }

    return 0;
}
