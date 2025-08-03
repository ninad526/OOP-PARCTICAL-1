#include <iostream>
using namespace std;

int main() {
    extern bool is_ascending(int[], int); // Function declaration
    int array[5] = {1,2,3,4,5};
    int n = 5;

    
    cout << is_ascending(array, n) << endl;

    return 0;
}