#include <iostream>

int main() {
  extern int sum_two_arrays(int[], int[] ,int);
    int array[5] = {5,5,6,7,5};
    int secondarray[5] = {1,2,3,8,5};
    std::cout << "The sum of 2 arrays is: " << sum_two_arrays(array, secondarray ,5) << std::endl;
    return 0;
}