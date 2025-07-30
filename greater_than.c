#include <stdio.h>

int main(){

    float num1, num2;
    printf("Enter two numbers: \n");
    scanf("%f %f", &num1, &num2);
    if (num1 > num2){

        printf("%.2f is greater than %.2f\n", num1, num2);

    }
    else if (num1 < num2){

        printf("%.2f is less than %.2f\n", num1, num2);

    }
    else {

        printf("Both numbers are equal.\n");
    }

return 0;
}