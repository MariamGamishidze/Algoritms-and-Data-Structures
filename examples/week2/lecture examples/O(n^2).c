#include <stdio.h>
// find maximum sum of any two elements in the array A[N]
int main() {
    int A[] = {10, 45, 23, 89, 12, 67};
    int n = sizeof(A) / sizeof(A[0]);

    int maxSum = A[0] + A[1];  // initial pair

    for (int i = 0; i < n; i++) { // picks element A[i]
        for (int j = i + 1; j < n; j++) { //pairs it with all elements after it, j=i+1 to avoid repeating pairs and pairing element with itself avoids repeated pairs
            int sum = A[i] + A[j];

            if (sum > maxSum) {
                maxSum = sum;
            }
        }
    }

    printf("Maximum sum of any two elements: %d\n", maxSum);

    return 0;
}
/*Even when we make some optimization of the code (we
do not need to multiply all i and j, it is enough to multiply
every i with j only from i+1 to n, because i * j = j * i ), we
receive n*(n-1)/2, which is of course much better than
n*(n-1), but anyway has quadratic characteristic of the
growth with growth on input data n.
And really, time for 1000 elements will be 100 times
longer as for the 100 elements (10^6 vs. 10^4)
So here we write O(n2
) and call it Quadratic time */