
#include <stdio.h>

void reverse(int arr[], int size) {
    /* TODO: reverse the array arr using pointers */
    int *left = arr;                    // Pointer to the first element
    int *right = arr + size - 1;        // Pointer to the last element
    int temp;
    
    // Swap elements from both ends moving towards the center
    while (left < right) {
        // Swap the values pointed to by left and right
        temp = *left;
        *left = *right;
        *right = temp;
        
        // Move pointers towards center
        left++;
        right--;
    }
}

int main() {
    int arr[10];
    int size;
    
    printf("Enter the number of elements (max 10): ");
    scanf("%d", &size);
    
    if (size <= 0 || size > 10) {
        printf("Invalid size. Please enter a number between 1 and 10.\n");
        return 1;
    }
    
    printf("Enter %d integers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    reverse(arr, size);
    
    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
