#include <stdio.h> 

int sum(int a, int b) {
    return a + b;
}

int main(){
    int result = sum(5, 10);
    printf("The sum is: %d\n", result);
    return 0;
}