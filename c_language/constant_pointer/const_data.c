#include <stdio.h>

int main() {
    int value1 = 10;
    int value2 = 20;

    const int* const ptr = &value1;  // const pointer to const int

    printf("Value pointed by ptr: %d\n", *ptr);

    *ptr = 15;  // Error: cannot modify the data
    ptr = &value2;  // Error: cannot change the pointer itself

    return 0;
}
