
   
    #include <stdio.h>

int main() {
    int array[] = {64, 25, 12, 22, 11};
    int n = sizeof(array) / sizeof(array[0]);
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++) {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (array[j] < array[min_idx])
                min_idx = j;
        }

        // Swap the found minimum element with the first element
        int temp = array[min_idx];
        array[min_idx] = array[i];
        array[i] = temp;
    }

    // Print the sorted array
    printf("Sorted array: \n");
    for (i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");
    
    return 0;
}
