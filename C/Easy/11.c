
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i <= size; i++) {
        printf("%d\n ", arr[i]);
    }
    return 0;
}