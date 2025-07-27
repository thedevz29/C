#include <stdio.h>
int main() {
    float sub1, sub2, sub3, sub4, sub5;
    float total, percentage;
    printf ("Enter marks for 5 subjects below (out of 100): \n");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total / 500) * 100;

    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}