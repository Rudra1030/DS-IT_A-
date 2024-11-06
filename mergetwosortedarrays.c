#include <stdio.h>

void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i = 0, j = 0, k = 0;

    // Merge the two arrays
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1, if any
    while (i < size1) {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2, if any
    while (j < size2) {
        merged[k++] = arr2[j++];
    }
}

int main() {
    int arr1[100], arr2[100], merged[200];
    int size1, size2;

    // Input size and elements of the first sorted array
    printf("Enter size of first sorted array: ");
    scanf("%d", &size1);
    printf("Enter elements of first sorted array: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size and elements of the second sorted array
    printf("Enter size of second sorted array: ");
    scanf("%d", &size2);
    printf("Enter elements of second sorted array: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge the two sorted arrays
    mergeSortedArrays(arr1, size1, arr2, size2, merged);

    // Output the merged sorted array
    printf("Merged sorted array: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}