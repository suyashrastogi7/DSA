#include <iostream>
#include <math.h>

using namespace std;

int BinaryToDecimal() {

  int n;
  cout << "Enter Binary Number ";
  cin >> n;

  int answer = 0;
  int i = 0;

  while(n > 0){
    int digit = n % 10;
    answer += (digit*pow(2, i));
    n = n/10;
    i++;
  }

  cout << "Binary To Decimal is: " << answer;
  
  return 0;
}