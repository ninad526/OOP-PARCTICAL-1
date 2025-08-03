#include <iostream>

int main() {
  extern int count_evens(int);
    int number = 10;
    std::cout << "The number of even numbers is: " << count_evens(10) << std::endl;
    return 0;
}