#include <iostream>
using namespace std;

int main() {
    extern bool median_array(int[], int); // Function declaration
    int array[] = {3, 5, 2, 1, 4};
    int n = 5;

    cout << median_array(array, 5) << endl; 

    return 0;
}

