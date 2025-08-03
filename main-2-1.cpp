#include <iostream>

int main() {
  extern int  min_element(int[], int);
    int array[5] = {100,29,21,34,1};
    int n = 5;
    std::cout << "The minimum number is: " << min_element(array, 5) << std::endl;
    return 0;
}