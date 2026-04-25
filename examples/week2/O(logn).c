#include <stdio.h>

// This function computes x * y without using multiplication
// It uses addition + bit operations (Russian Peasant Multiplication)

long int product (int x, int y)
{
    long int z = 0;   // result (accumulator)

    // Loop runs until y becomes 0
    // IMPORTANT: y is reduced mainly by dividing by 2 → logarithmic behavior
    while (y > 0)
    {
        // If y is odd
        if (y % 2 != 0) {
            // Subtract 1 to make y even
            y--;

            // Add current x to result
            z += x;
        }
        else {
            // If y is even:
            // divide y by 2 (right shift)
            y >>= 1;

            // multiply x by 2 (left shift)
            x <<= 1;
        }

        // Print current values (for understanding/debugging)
        printf("\n x = %d; y = %d; z = %d", x, y, z);
    }

    // When y becomes 0, z contains the final result (x * y)
    return z;
}

/*
---------------- TIME COMPLEXITY ----------------

Each iteration does one of two things:
1) y--        → decreases by 1 (happens only when y is odd)
2) y = y / 2  → halves y (most important operation)

Since y is repeatedly divided by 2:
y → y/2 → y/4 → y/8 → ... → 1

Number of such steps ≈ log2(y)

Even though we sometimes do y--, those steps are limited
and do not change the overall growth.

FINAL:
Time Complexity = O(log y)

------------------------------------------------
*/