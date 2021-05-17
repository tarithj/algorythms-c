#include <stdio.h>

#define true 1
#define false 0
#define bool int

int main() {
    int a[] = {0, 0, 1, 2, 3, 4, 3, 2, 1, 0, 0, 2, 3, 5, 6, 7, 4, 3, 0, 1, 2, 3, 2, 1, 0};

    int size = sizeof(a) / sizeof(a[0]);
    int base_value = 0;

    int curve_counter = 0;

    bool at_start_of_curve = false;
    for (int i = 0; i < size; i++) {

        if (at_start_of_curve == true) {
            if (a[i] == base_value) {
                // at the end of the curve
                curve_counter++;
                at_start_of_curve = false;
            }
        } 
        else if (a[i] != base_value) {
            // at the start of the curve
            at_start_of_curve = true;
        }
    }
    printf("found %d curves\n", curve_counter);
}