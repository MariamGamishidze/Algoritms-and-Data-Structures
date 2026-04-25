#include <stdio.h>
//In the array A[N} find and write down the 7th element]
int main() {
    int A[] = {10, 20, 30, 40, 50, 60, 70, 80};

    int n = sizeof(A) / sizeof(A[0]); // Calculate the number of elements in the array

    if (n >= 7) { // Check if the array has at least 7 elements
        printf("The 7th element is: %d\n", A[6]);  // index 6 = 7th element
    } else {
        printf("Array does not have a 7th element.\n");
    }

    return 0;
}
// Accessing an elemnt by index is direct No loops needed --> Time complexity` O(1)