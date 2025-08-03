#include <iostream>

int main() {
    extern void two_five_nine(int[], int); // Function declaration
    int array[13] = {2,1,5,1,9,2,4,5,9,1,2,5,9};
    int n = 13;

    two_five_nine(array, n);

    return 0;
}
