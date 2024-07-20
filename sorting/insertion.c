// insertion sort is basically swapping from end till the element finds its pos ;
#include <stdio.h>

int main() {
    int array[] = {64, 25, 12, 22, 11};
    int n = sizeof(array) / sizeof(array[0]);
    int i, key, j;

    // Start from the second element (index 1)
    for (i = 1; i < n; i++) {
        key = array[i]; // Store the current element
        j = i - 1;

        // Move elements of array[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key; // Place the current element at its correct position
    }

    // Print the sorted array
    printf("Sorted array: \n");
    for (i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");
    
    return 0;
}
