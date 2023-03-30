#include <bits/stdc++.h>
using namespace std;
 
// Function that returns the
// the count of composite numbers
int compositeCount(int arr[], int n, int* sum)
{
    // Find maximum value in the array
    int max_val = *max_element(arr, arr + n);
 
    // Use sieve to find all prime numbers
    // less than or equal to max_val
    // Create a boolean array "prime[0..n]". A
    // value in prime[i] will finally be false
    // if i is Not a prime, else true.
    vector<bool> prime(max_val + 1, true);
 
    // Set 0 and 1 as primes as
    // they don't need to be
    // counted as composite numbers
    prime[0] = true;
    prime[1] = true;
    for (int p = 2; p * p <= max_val; p++) {
 
        // If prime[p] is not changed, then
        // it is a prime
        if (prime[p] == true) {
 
            // Update all multiples of p
            for (int i = p * 2; i <= max_val; i += p)
                prime[i] = false;
        }
    }
 
    // Count all composite
    // numbers in the arr[]
    int count = 0;
    for (int i = 0; i < n; i++)
        if (!prime[arr[i]]) {
            count++;
            *sum = *sum + arr[i];
        }
 
    return count;
}
 
// Driver code
int main()
{
 
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
 
    cout << "Count of Composite Numbers = "
          << compositeCount(arr, n, &sum);
 
    cout << "\nSum of Composite Numbers = " << sum;
 
    return 0;
}
