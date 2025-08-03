#include <iostream>

bool is_fanarray(int array[], int n){
  if (n < 1){
    return false;
  }
  
  for (int i = 0; i < n/2 ; i++) {
    if (array[i] > array[i+1] ){
      return false; // not in ascending
    }
  }

  int j = n-1;
  for (int i = 0; i < n/2 ; i++){
      if (array[i] != array[j]) {
        return false;
      }
      j--;
  }
  return true; // satisfies both conditions
}
