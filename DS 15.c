#include <stdio.h>
#define SIZE 10
int hashTable[SIZE];
int i;
void initHashTable() {
    for (i = 0; i < SIZE; i++)
        hashTable[i] = -1;
}
int hashFunction(int key) {
    return key % SIZE;
}
void insert(int key) {
    int index = hashFunction(key);
    int originalIndex = index;

    while (hashTable[index] != -1) {
        index = (index + 1) % SIZE;
        if (index == originalIndex) {
            printf("Hash table is full. Cannot insert %d\n", key);
            return;
        }
    }
    hashTable[index] = key;
    printf("Inserted %d at index %d\n", key, index);
}
void display() {
    printf("\nHash Table:\n");
    for (i = 0; i < SIZE; i++)
        printf("Index %d: %d\n", i, hashTable[i]);
}
int main() {
    int n, key;
    int i;
    initHashTable();
    printf("Enter number of elements to insert: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter key %d: ", i + 1);
        scanf("%d", &key);
        insert(key);
    }
    display();
    return 0;
}

