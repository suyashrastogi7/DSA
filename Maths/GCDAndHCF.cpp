#include <iostream>

using namespace std;

/*
GCD (Greatest common divisor) is same as HCF (highest common factor)
Is the greatest number that completely divides two given numbers.

Reference :
https://www.naukri.com/code360/library/gcd-euclidean-algorithm
*/

/*
  Euclid's Algo ->
  1. gcd(a, b) = gcd(a-b, b);
  2. gcd(a, b) = gcd(a%b, b);

  Approach -> Keep applying formula till one of the numbers becomes zero.
  ex: gcd(72, 24) = gcd(48, 24) = ggcd(24, 24) = gcd(0, 24)< since one numbers
  becomes zero, hence the remaining one is the answer.
*/

int findGDC(int a, int b) {
  if (a == 0)
    return b;
  if (b == 0)
    return a;

  while (a != b) {
    if (a > b) {
      a = a - b;
    } else {
      b = b - a;
    }
  }
  return a;
}

/*
 Relation between LCM and HCF
 lcm(a, b) * gcd(a, b) = a*b;
*/