#include <iostream>

int main() {
    extern void print_pass_fail(char grade);
    print_pass_fail('A');  // Pass
    print_pass_fail('B');  // Pass
    print_pass_fail('C');  // Pass
    print_pass_fail('D');  // Fail
    print_pass_fail('E');  // Fail
    print_pass_fail('F');  // Nothing

    return 0;
}