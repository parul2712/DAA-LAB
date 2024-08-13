#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n) {
    int i, j, min_index;

    for (i = 0; i < n-1; i++) {

        min_index = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        swap(&arr[min_index], &arr[i]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[SIZE];

    srand(time(0));

    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 20; 
    }

    printf("Unsorted array: \n");
    printArray(arr, SIZE);

    selectionSort(arr, SIZE);

    printf("Sorted array: \n");
    printArray(arr, SIZE);

    return 0;
}
