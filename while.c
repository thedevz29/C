#include <stdio.h>
//pretty basic example but works well to demonstrate a while loop
int main() {
    int projects;
    projects = 5;

    while (projects >= 1){
        printf("You are not free rn\n");
        projects--;
        if (projects == 0) {
            printf("You are free now");
        } else {
            printf("You have %d projects left\n", projects);
        }
    }
    return 0;
}