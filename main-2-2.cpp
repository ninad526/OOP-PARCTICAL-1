#include <iostream>

int main() {
  extern int  max_element(int[], int);
    int array[5] = {100,29,21,34,1};
    int n = 5;
    std::cout << "The maximum number is: " << max_element(array, 5) << std::endl;
    return 0;
}