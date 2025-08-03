#include <iostream>
using namespace std;

int main() {
    extern bool is_fanarray(int[], int); // Function declaration
    int array[] = {1, 2, 3, 2, 1};
    int n = 5;

    cout << is_fanarray(array, 5) << endl;

    return 0;
}