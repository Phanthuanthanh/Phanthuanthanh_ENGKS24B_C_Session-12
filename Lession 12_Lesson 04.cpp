#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0]; 
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }

    return max; 
}

int main() {
    int arr[] = {1, 2, 9, 6, 0, 8, 7}; 
    int size = sizeof(arr) / sizeof(arr[0]); 

    printf("So lon nhat trong mang la: %d\n", findMax(arr, size));

    return 0;
}

