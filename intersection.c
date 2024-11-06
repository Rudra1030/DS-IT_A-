#include <stdio.h>

#define MAX_SIZE 100

// Function to check if an element is present in the array
int isPresent(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return 1; // Element is present
        }
    }
    return 0; // Element is not present
}

// Function to perform the intersection of two arrays
void intersectionOfArrays(int arr1[], int size1, int arr2[], int size2, int intersectionArr[], int *intersectionSize) {
    *intersectionSize = 0;

    // Find common elements
    for (int i = 0; i < size1; i++) {
        if (isPresent(arr2, size2, arr1[i]) && !isPresent(intersectionArr, *intersectionSize, arr1[i])) {
            intersectionArr[(*intersectionSize)++] = arr1[i];
        }
    }
}

int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE], intersectionArr[MAX_SIZE];
    int size1, size2, intersectionSize;

    // Input size and elements of the first array
    printf("Enter size of first array: ");
    scanf("%d", &size1);
    printf("Enter elements of first array: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size and elements of the second array
    printf("Enter size of second array: ");
    scanf("%d", &size2);
    printf("Enter elements of second array: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Perform the intersection of the two arrays
    intersectionOfArrays(arr1, size1, arr2, size2, intersectionArr, &intersectionSize);

    // Output the intersection of the arrays
    printf("Intersection of the two arrays: ");
    for (int i = 0; i < intersectionSize; i++) {
        printf("%d ", intersectionArr[i]);
    }
    printf("\n");

    return 0;
}