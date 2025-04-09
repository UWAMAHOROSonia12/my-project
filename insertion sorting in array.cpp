#include <stdio.h>

// Function to perform Insertion Sort
void insertionSort(int A[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {  // Start from the second element
        key = A[i];  // Store the element to be inserted
        j = i - 1;

        // Move elements that are greater than key to one position ahead
        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];  // Shift element to the right
            j = j - 1;  // Move to the previous element
        }
        A[j + 1] = key;  // Insert the key at the correct position
    }
}

// Function to print the array
void printArray(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

// Main function
int main() {
    int A[] = {5, 3, 8, 6, 2};  // Sample array
    int n = sizeof(A) / sizeof(A[0]);  // Calculate the number of elements

    printf("Original array: ");
    printArray(A, n);  // Print original array

    insertionSort(A, n);  // Call the sorting function

    printf("Sorted array: ");
    printArray(A, n);  // Print sorted array

    return 0;
}
