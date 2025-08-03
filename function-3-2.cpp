#include <iostream>
#include <algorithm>  // For std::sort

int median_array(int array[], int n){
  if (n < 1 || n % 2 == 0){
    return 0;
  }
  
  std::sort(array, array + n);  // Use std::sort

  return array[n / 2];

  return 0; 
}
