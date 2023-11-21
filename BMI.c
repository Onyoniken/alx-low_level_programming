#include <stdio.h>

/**
 * below 18.5 underweight
 * 18.5 - 24.9 healthy weight
 * 25.0 – 29.9 Overweight
 * 30.0 and Above Obesity
 * 30.0 - 34.9 class 1 obesity
 * 35.0 - 39.9 class 2 obesity
 */

int main() {
   float weight; // in kgs
   float height; // in metres
   float BMI; 
   
   printf("please enter your weight in kilograms\n");
   scanf("%f", &weight);
   printf("please enter your height in metres\n");
   scanf("%f", &height);
   
   BMI = weight / (height * height);
   
   if (BMI <= 18.5) {
       printf("Underweight\n");
   } else if (BMI >= 18.5 && BMI <= 24.9) {
       printf("Your BMI is %f: Healthy weight.\n", BMI);
   } else if (BMI >= 25.0 && BMI <= 29.9) {
       printf("Your BMI is %f: Overweight.\n", BMI);
   } else if (BMI >= 30.0) {
       printf("Your BMI is %f: Obesity.\n", BMI);
       if (BMI >= 30.0 && BMI <= 34.9) {
           printf("Your BMI is %f: Class 1 Obesity.\n", BMI);
       }
       if (BMI >= 35.0 && BMI <= 39.9) {
           printf("Your BMI is %f: Class 2 Obesity.\n", BMI);
       }
   }
   
   return 0;
}

