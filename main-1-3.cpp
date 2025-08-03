#include <iostream>

int main() {
  extern int num_count(int[], int,int);
    int array[5] = {5,5,6,7,5};
    int number = 5;
    std::cout << "The number of elements equal to number is: " << num_count(array, 5,5) << std::endl;
    return 0;
}