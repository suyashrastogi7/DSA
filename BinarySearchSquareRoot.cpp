#include <iostream>

using namespace std;

long long int squareRootInteger(int n) {
  int s = 0;
  int e = n;
  long long int mid = s + (e - s) / 2;
  // long long int since if number is very large then sqare will give error with
  // just int
  long long int ans;
  while (s <= e) {
    long long int square = mid * mid;
    if (square == n)
      return mid;
    if (square < n) {
      ans = mid;
      s = mid + 1;
    } else {
      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}

double getPrecision(int n, int precision, int integerPart) {
  // Keeps track of decimal places
  double factor = 1;
  // update ans if closer solutions is found
  double ans = integerPart;
  // loop for the number of precision
  for (int i = 0; i < precision; i++) {
    factor /= 10;
    // checkking if decimal included number is less than n, then store the ans
    for (double j = integerPart; j * j < n; j = j + factor) {
      ans = j;
    }
  }
  return ans;
}

// int main() {
//   long long int res = squareRootInteger(24);
//   double ans = getPrecision(24, 3, res);
//   cout << ans;
// }