#include <stdio.h>

// Binary Search In C 🔥🔥🔥

#define size 5

int index(int array[size], int item) {
    int l = 0;
    int h = size - 1; 

    while (l <= h) {
        int m = (l + h) / 2; 

        if (array[m] == item) {
            return m; 
        } else if (array[m] < item) {
            l = m + 1; 
        } else {
            h = m - 1; 
        }
    }

    return -1;
}

int main() {
    int arr[size] = {5, 2, 3, 1, 4};
    int t = 3; 

    // Binary Search only works on sorted arrays so i used bubble sort to sort the array

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int i = index(arr, t); 
    if (i == -1) {
        printf("%d is not inside the array.\n", t);
        return 0;
    }

    printf("%d found at index %d\n", t, i);

    return 0;
}
