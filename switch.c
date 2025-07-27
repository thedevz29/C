#include <stdio.h>

int main (){

    int developers;

    developers = 2;
    

    switch (developers){

        case 1:
            printf("1 developer is available.\n");
            break;
        case 2:
            printf("2 developers are available.\n");
            break;

        case 3:
            printf("3 developers are available.\n");
            break;
        default:
            printf("No developers are available.\n");
            break;
    }

    return 0;
}