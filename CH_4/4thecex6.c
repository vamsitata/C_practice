#include <stdio.h>
int main(){
    int w;
    printf("Enter the weight: ");
    scanf("%d",&w);
    if(w<115){
          printf("Boxer is flyweight");
    }else if(w>=115 && w<=121){
           printf("Boxer is Bantamweight");
    }else if(w>=122 && w<=153){
        printf("Boxer is Featherweight");
    }else if(w>=154 && w<=189){
        printf("Boxer is Middleweight");
    }else if(w>=190){
printf("Boxer is Heavyweight");
    }
}  