#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

      
        if (arr[mid] == key)
            return mid;

        else if (key < arr[mid])
            right = mid - 1;

        else
            left = mid + 1;
    }

    return -1; // Not found
}

int main() {
    int arr[] = {2, 5, 7, 11, 14, 18, 21};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;
    printf("Enter element to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, n, key);

    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", result);

    return 0;
}
