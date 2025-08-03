#include <iostream>

double weighted_average(int array[], int n){
  if (n < 1){
    return 0;
  }

  int uniqueElements[n];  // Array to store unique elements
  int uniqueCount = 0;    // Count of unique elements
  double weightedSum = 0;

  // Find unique elements
  for (int i = 0; i < n; i++) {
    bool isUnique = true;
    for (int j = 0; j < uniqueCount; j++) {
        if (array[i] == uniqueElements[j]) {
            isUnique = false;
            break;
        }
    }
    if (isUnique) {
        uniqueElements[uniqueCount++] = array[i];
    }
}

// Compute weighted average
    for (int i = 0; i < uniqueCount; i++) {
        int element = uniqueElements[i];
        int frequency = 0;

        // Count frequency of the element
        for (int j = 0; j < n; j++) {
            if (array[j] == element) {
                frequency++;
            }
        }

        // Apply weighted formula
        weightedSum += element * ((double)frequency / n);
    }

    return weightedSum;
}
