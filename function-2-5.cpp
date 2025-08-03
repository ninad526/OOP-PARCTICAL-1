#include <iostream>
using namespace std;

bool is_descending(int array[], int n){
  // putting the condition
  if ( n < 0){
    return false;
  }
  for (int i = 1; i < n; i++) {
    if (array[i] > array[i-1] ){
      return false;
    }
  }
  return true;

}