#include <iostream>
#include <vector>

using namespace std;

/*
Reference: 

*/

// Brute Fore Approach
bool isPrime(int n) {
  if (n <= 1)
    return false;
  for (int i = 2; i < n; i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}

// Seive of Eratosthenes
/*
Approach:
1. Marks all numbers in range of N to be prime Numbers.
2. Start from first prime numbers and mark all its multiples as non prime.

*/

int countPrimesFromSeiveOfEratosthenes(int n) {
  // Initialize count to 0;
  int count = 0;
  // Create a boolean vector marking all as prime Numbers
  vector<bool> m(n + 1, true);
  // Mark 0 and 1 as non prime numbers Manually.
  m[0] = m[1] = false;
  // Start from 2 and increase count value as well as mark all its multiples as
  // non prime
  for (int i = 2; i < n; i++) {
    if (m[i]) {
      count++;
      // Marking multiples of prime numbers as non prime.
      for (int j = i * 2; j < n; j = j + i) {
        m[j] = false;
      }
    }
  }
  return count;
}