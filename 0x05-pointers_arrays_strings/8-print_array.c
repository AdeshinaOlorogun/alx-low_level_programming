#include <stdio.h>

/**
 * print_array - Print the elements of an integer array.
 * @a: The array to be printed.
 * @n: The number of elements in the array.
 */
void print_array(int *a, int n)
{
    if (n <= 0) {
        printf("\n");  // No elements to print, so just print a newline.
        return;
    }

    for (int x = 0; x < n; x++) {
        printf("%d", a[x]);  // Print the current element.

        // Add a comma and space after the element, except for the last element.
        if (x < n - 1) {
            printf(", ");
        }
    }

    printf("\n");  // Print a newline to end the line.
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);
    print_array(myArray, arraySize);
    return 0;
}

