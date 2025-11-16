/* Reversing an array using pointers */

#include <stdio.h>

void reverseArray(int *arr, int size) {
    /* TODO: reverse the array arr using pointers */
    int *start = arr;
    int *end = arr;
    end += size -1;
    for (int i = 0; i < size/2; i++){
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for(int i=0; i< n; i++) {
        scanf("%d", arr+i);
    }

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr, n);    

    printf("Reversed Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
