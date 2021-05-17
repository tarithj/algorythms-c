#include <stdio.h>

int main() {
    int x = 0;
    int y = 1;
    int flip = 0;

    int max = 255; // set this to the max number you want to get

    printf("%d\n%d\n",x, y); // print out 0, 1

    while (x+y < max) {
        printf("%d",(x+y));
        printf("\n");


        if (flip == 0) {
            x = x+y;
        } else {
            y = x+y;
        }

        flip = !flip;
    }
}