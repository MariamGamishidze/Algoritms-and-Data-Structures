/*1*/ for (i = 0; i < n; i++) // when we have single loop --> O(n)
/* the loop strats at i=0, increases by 1 each time (i++),Stops when i=n, 
so the values of i are: 0,1,2,3,...,n-1. total number of iterations = n times.
Since each iteration performs a constant-time operation, 
the total time is proportional to n. Therefore, the time complexity is O(n).

/*2*/ for (i = 0; i < n; i++) // Nested loop --> O(n^2)
  for (j = 0; j < n; j++)

/*3*/  for (i = 1; i < n; i *= 2) //Logarithmic loop --> O(log n)
/*here we increasing i by a factor of 2 each time, so the values of i are: 1, 2, 4, 8, ..., up to n-1.
 The number of iterations is log n. Since each iteration performs a constant-time operation, the total time is proportional to log n. 
 Therefore, the time complexity is O(log n).*/

/*4*/  for (i = 0; i < n; i++) // O(n) loop
     for (j = 1; j < n; j *= 2) // O(log n) loop
     // O(n log n) time complexity

/*5*/  for (i = 0; i < n; i++) {
    // O(n)
} 

for (j = 0; j < n; j++) {
    // O(n)
}// O(n) + O(n) = O(2n) = O(n) time complexity becasue we have two separated loops.

/*6*/ for (i = n; i > 1; i /= 2) //--> O(log n)
/*The loop variable is divided by 2 in each iteration, forming the sequence n, n/2, n/4, …, 1.
 After k iterations, n / 2^k = 1, which gives k = log n. Therefore, the time complexity is O(log n).*/
 //any loop that halves or reduces exponentially the input size in each iteration is O(log n).

 /*7*/for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
        print(...);
    }
}
/*For each `i`, inner loop runs:
i = 0 → 0 times
i = 1 → 1 time
i = 2 → 2 times
i = 3 → 3 times
...
i = n-1 → n-1 times
Total work:
0 + 1 + 2 + 3 + ... + (n-1)
That sum is: n(n-1)/2
So:
n(n-1)/2 = (n² - n)/2
In Big-O, we keep only the biggest term:
O(n²)
Final answer:
O(n²)
summary:
> The outer loop runs n times. For each value of i, the inner loop runs i times.
 So the total number of operations is 0 + 1 + 2 + ... + (n−1), which is n(n−1)/2.
  Therefore, the complexity is O(n²).
*/
/*8*/for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j *= 2) { //0*2=0, so j stays 0 forever.
        print(...);
    }
}
/*Since j starts at 0 and is multiplied by 2 in each iteration, 
it remains 0 forever. The loop condition j < n is always true, 
so the loop never terminates. Therefore, the algorithm results in an infinite
 loop and has no valid time complexity.*/

/*9*/for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
        print(...);
    }
}
/*The outer loop runs n times. 
For each i, the inner loop runs from i to n−1, so it runs n−i times. 
The total is n + (n−1) + ... + 1 = n(n+1)/2, therefore the complexity is O(n²).*/
 
/*10*/for (int i = 0; i < n; i += 2) {
   
}
/*The loop variable increases by 2 each iteration, so it runs approximately n/2 times. 
Ignoring constants, the time complexity is O(n).*/

/*11*/ for (int i = 1; i < n; i *= 3) {

}
/*The loop variable is multiplied by 3 in each iteration, 
forming the sequence 1, 3, 9, 27, ... up to n. After k iterations, i = 3^k. 
The loop stops when 3^k ≥ n, giving k = log₃(n). Therefore, the time complexity is O(log n).*/

/*12*/ for (int i = 0; i < n; i++) {
    for (int j = 0; j < i * i; j++) {
        print(...);
    }
}
/*The outer loop runs n times.
 For each i, the inner loop runs i² times.
  The total number of operations is the sum of squares 0² + 1² + ... + (n−1)², which is proportional to n³. 
  Therefore, the time complexity is O(n³)*/

/*13*/for (int i = 1; i < n; i *= 2) {
    for (int j = 1; j < i; j++) {
        print(...);
    }
}
/*The outer loop runs log n times.
 The inner loop runs i times for each iteration, where i doubles each time. 
 The total work is 1 + 2 + 4 + ... + n, which sums to O(n). 
 Therefore, the overall complexity is O(n).*/

 /*14*/for (int i = 0; i < n; i++) {
    for (int j = 1; j < n; j *= 2) {
        for (int k = 0; k < j; k++) {
            print(...);
        }
    }
}
/*The outer loop runs n times.
 The middle loop runs log n times, and for each iteration, the inner loop runs j times where j doubles each time.
  The total work of the inner two loops is 1 + 2 + 4 + ... + n = O(n). 
  Therefore, the overall complexity is O(n²).*/

/*15*/for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j += i) {
        print(...);
    }
}
/*When i = 0, the inner loop increment j += i does not change j,
 so the loop condition remains true forever, resulting in an infinite loop.*/

 /*16*/for (int i = 1; i < n; i++) {
    for (int j = 1; j < n; j *= i) {
        print(...);
    }
}
/*When i = 1, the inner loop multiplies j by 1, so j never changes. 
Since j < n remains true, the loop does not terminate, resulting in an infinite loop.*/