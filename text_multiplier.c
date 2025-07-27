#include <stdio.h>

int main(){

    int n;
    char text[100];
    printf("Enter the number of times to repeat the text: ");
    scanf("%d", &n);
    printf("Enter the text to repeat: ");
    scanf(" %99[^\n]", text);

    for (int i=0; i<n; i++){
        printf("%s\n", text);
    }
}