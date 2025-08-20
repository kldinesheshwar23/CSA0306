#include <stdio.h>
#define MAX_SIZE 100
int array[MAX_SIZE];
int size = 0;
int i;
void display() {
    if (size == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
void insert(int element, int position) {
    if (size >= MAX_SIZE) {
        printf("Array is full. Cannot insert.\n");
        return;
    }
    if (position < 0 || position > size) {
        printf("Invalid position.\n");
        return;
    }
    for (i = size; i > position; i--) {
        array[i] = array[i - 1];
    }
    array[position] = element;
    size++;
    printf("Inserted %d at position %d.\n", element, position);
}
void delete(int position) {
	int i;
    if (size == 0) {
        printf("Array is empty. Cannot delete.\n");
        return;
    }
    if (position < 0 || position >= size) {
        printf("Invalid position.\n");
        return;
    }
    int deleted = array[position];
    for (i = position; i < size - 1; i++) {
        array[i] = array[i + 1];
    }
    size--;
    printf("Deleted element %d from position %d.\n", deleted, position);
}
int main() {
    int choice, element, position;
    while (1) {
        printf("\nArray Operations Menu:\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &element);
                printf("Enter position (0 to %d): ", size);
                scanf("%d", &position);
                insert(element, position);
                break;
            case 2:
                printf("Enter position to delete (0 to %d): ", size - 1);
                scanf("%d", &position);
                delete(position);
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}


