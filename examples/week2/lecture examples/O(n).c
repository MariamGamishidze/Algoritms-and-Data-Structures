#include <stdio.h>
// Find the biggest element in the array A[N]
int main() {
    int A[] = {10, 45, 23, 89, 12, 67};
    int n = sizeof(A) / sizeof(A[0]);

    // 1. take first element as initial maximum
    int m = A[0];

    // 2. check remaining elements
    for (int i = 1; i < n; i++) {
        if (A[i] > m) {
            m = A[i];  // update maximum
        }
    }

    // 3. print result
    printf("The biggest element is: %d\n", m);

    return 0;
}
/*Here we must read all the elements, because array
is unsorted and we do not know, were to look for
the maximal value. The time here depends on the
number of data: for array with 1000 elements we
need 10 times more time than for the array with
100 elements (due to the length of the loop). --> Complexity: o(n) */
