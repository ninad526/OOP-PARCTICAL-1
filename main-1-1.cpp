#include <iostream>


// The `extern` keyword tells the compiler that the array_sum function exists,
// but will be implemented somewhere else


int main() {
  extern int array_sum(int[], int);
    int array[5] = {4,5,6,7,8};
    std::cout << "The sum is: " << array_sum(array, 5) << std::endl;
    return 0;
}
