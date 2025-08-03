#include <iostream>
using namespace std;

int main() {
    extern double weighted_average(int array[], int n);
    int array[] = {1, 2, 1, 4, 1, 3};
    int n = 6;

    cout << "Weighted Average: " << weighted_average(array, n) << endl;  
    return 0;
}