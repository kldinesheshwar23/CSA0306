#include <stdio.h>
int i;
int linearSearch(int arr[], int size, int target) {
    for (i = 0; i < size; i++) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}
int main() {
    int arr[100], size, target, result;
    int i;
    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number to search: ");
    scanf("%d", &target);
    result = linearSearch(arr, size, target);
    if (result != -1)
        printf("Number found at index %d.\n", result);
    else
        printf("Number not found in the array.\n");
    return 0;
}

