/*
 Fast Exponentiation:

 Normal exponentiation takes o(N) time, to solve it in O(log N) fast exp is
 performed, a^b = (a^(b/2))^2 if b is even and (a^(b/2))^2 * a if b is odd.
*/

#include <iostream>

using namespace std;

int moduloExp(int a, int b, int m) {
  int res = 1;

  while (b > 0) {
    // Cheking if power is odd
    if (b & 1) {
      // ie. b is odd
      res = (1LL * res * (a) % m) % m;
    }
    a = (1LL * (a) % m * (a) % m) % m;
    // dividing power by 2 by right shifting it
    b = b >> 1;
  }
  return res;
}