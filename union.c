#include <stdio.h>

#define MAX_SIZE 100

// Function to check if an element is already present in the array
int isPresent(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return 1; // Element is present
        }
    }
    return 0; // Element is not present
}

// Function to perform the union of two arrays
void unionOfArrays(int arr1[], int size1, int arr2[], int size2, int unionArr[], int *unionSize) {
    *unionSize = 0;

    // Add elements from the first array
    for (int i = 0; i < size1; i++) {
        if (!isPresent(unionArr, *unionSize, arr1[i])) {
            unionArr[(*unionSize)++] = arr1[i];
        }
    }

    // Add elements from the second array
    for (int i = 0; i < size2; i++) {
        if (!isPresent(unionArr, *unionSize, arr2[i])) {
            unionArr[(*unionSize)++] = arr2[i];
        }
    }
}

int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE], unionArr[MAX_SIZE * 2];
    int size1, size2, unionSize;

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

    // Perform the union of the two arrays
    unionOfArrays(arr1, size1, arr2, size2, unionArr, &unionSize);

    // Output the union of the arrays
    printf("Union of the two arrays: ");
    for (int i = 0; i < unionSize; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");

    return 0;
}