#include <stdio.h>
int main() {
    float w, h;
    printf("Enter weight (in kilograms): ");
    scanf("%f", &w);

    printf("Enter height (in meters): ");
    scanf("%f", &h);

   float bmi = w / (h * h);

    printf("BMI: %f\n", bmi);

    if (bmi < 18.5) {
        printf("BMI Category: Underweight\n");
    } else if (bmi >= 18.5 && bmi < 25) {
        printf("BMI Category: Normal weight\n");
    } else if (bmi >= 25 && bmi < 30) {
        printf("BMI Category: Overweight\n");
    } else {
        printf("BMI Category: Obesity\n");
    }

}
