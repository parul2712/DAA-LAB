#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void swap(int *x, int *y)
{
int temp = *x; *x = *y;
*y = temp;
} 

void bubbleSort(int arr[], int n) 
{
 int i, j; 
for (i = 0; i < n-1; i++)
{ 
    for (j = 0; j < n-i-1; j++)
    { 
      if (arr[j] > arr[j+1])
      { 
        swap(&arr[j], &arr[j+1]);
      }
    }
}
}

    
void printArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
      printf("%d ", arr[i]); 
    } 
      printf("\n");
}
             
int main() 
{
    int arr[SIZE]; 
    srand(time(0)); 
    for (int i = 0; i < SIZE; i++) 
    {
      arr[i] = rand() % 100;
    }
    printf("Unsorted array: \n"); 
    printArray(arr, SIZE);
    bubbleSort(arr, SIZE); 
    printf("Sorted array : \n");
    printArray ( arr, SIZE);
    return 0;
}