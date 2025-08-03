#include <iostream>

int main() {
  extern double array_mean(int[], int);
    int array[5] = {4,5,6,7,8};
    std::cout << "The mean is: " << array_mean(array, 5) << std::endl;
    return 0;
}