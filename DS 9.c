#include <stdio.h>
int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; 
}
int main() {
    int arr[100], size, target;
    int i;
    printf("Enter number of elements: ");
    scanf("%d", &size);
    printf("Enter %d sorted elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number to search: ");
    scanf("%d", &target);
    int result = binarySearch(arr, size, target);
    if (result != -1)
        printf("Number found at index %d.\n", result);
    else
        printf("Number not found in the array.\n");

    return 0;
}


