#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;

    int *start;
    int *end;
    int temp;

    start = &arr[0];          // points to first element
    end = &arr[size - 1];     // points to last element

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;   // move to next element
        end--;     // move to previous element
    }

    printf("Reversed array:\n");

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}