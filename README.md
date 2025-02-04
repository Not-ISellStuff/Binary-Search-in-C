# Binary-Search-in-C
Sorts array using bubble sort then uses binary search to get the index of an item in an array

# Binary Search

``` c
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
```
