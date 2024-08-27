#include <stdio.h>

int main() {
    int value1 = 10;
    int value2 = 20;

    const int* ptr = &value1;  // Pointer to const int

    printf("Value pointed by ptr: %d\n", *ptr);

    *ptr = 15;  // Error: cannot modify the data through the pointer

    ptr = &value2;  // Allowed: can change the pointer itself
    printf("Value pointed by ptr: %d\n", *ptr);

    return 0;
}
