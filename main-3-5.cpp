#include <iostream>

extern double sum_even(double array[], int n);

int main() {
    double arr[] = {1.5, 2.5, 3.5, 4.5, 5.5};
    int n = 5;

    std::cout << "Sum of elements at even positions: " << sum_even(arr, n) << std::endl;

    return 0;
}