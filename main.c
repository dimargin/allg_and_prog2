#include "lr.h"
#include <stdio.h>

int main(void) {
    int n;

    while (1) {
        printf("Enter the lab number (to select an additional task, enter the lab number twice, PRESS 0 TO EXIT): ");
        scanf("%d", &n);
        getchar();

        if (n == 0) {
            break;
        } else if (n == 1) {
            lr1();
        } else if (n == 2) {
            lr2();
        } else if (n == 3) {
            lr3();
        } else if (n == 4) {
            lr4();
        } else if (n == 11) {
            dz1();  
        } else if (n == 22) {
            dz2();
        } else if (n == 33) {
            dz3();
        } else if (n == 5) {
            lr5();
        } else if (n == 44) {
            dz4();
        } else if (n == 55) {
            dz5();
        } else if (n == 6) {
            lr6();
        } else if (n == 66) {
            dz6();
        } else if (n == 7) {
            lr7();
        } else {
            printf("there is no such lab");
        }
    }

    return 0;
}




