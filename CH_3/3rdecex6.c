#include <stdio.h>
int  main(){
    int r,a,s;
    printf("Enter the age of ram:");
    scanf("%d",&r);
    printf("Enter the age of shyam:");
    scanf("%d",&s);
    printf("Enter the age of ajay:");
    scanf("%d",&a);
    if(a>s || a>r){
        if(s>r){
            printf("Ram is younger than both");
        }
        if(r>s){
            printf("shyam is younger than both");
        }
    }else{
        printf("Ajay is younger");
    }
}