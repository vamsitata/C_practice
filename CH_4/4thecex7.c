#include <stdio.h>



int main() {
    int red, green, blue;
    printf("Enter the RGB values (0-255): ");
    scanf("%d %d %d", &red, &green, &blue);
    double r = (double)red / 255.0;
    double g = (double)green / 255.0;
    double b = (double)blue / 255.0;
    double white;
if(r>g){
    if(r>b){
        white=r;
    }else{
        white =b;
    }
}else if(g>b){
    white=g;
}else{
    white=b;
}
   

    double c = (white - r) / white;
    double m = (white - g) / white;
    double y = (white - b) / white;
    double k = 1 - white;

    if (white == 0) {
        c = m = y = 0.0;
        k = 1.0;
    }

    printf("CMYK values: C=%.2f, M=%.2f, Y=%.2f, K=%.2f\n", c, m, y, k);
    

    return 0;
}
