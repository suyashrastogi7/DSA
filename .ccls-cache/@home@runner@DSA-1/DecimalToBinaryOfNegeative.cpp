#include <iostream>
#include <math.h>

using namespace std;

int DecimalToBinaryOfNegeativeNumber() {
  printf("Enter a negeative number to convert to binary");
  int n;
  cin >> n;
  int positive = -n;

  int answer = 0;
  int i = 0;

  //converting to binary
  while(positive != 0){
    int bit = positive & 1;
    answer = (bit * pow(10, i)) + answer;
    positive = positive >> 1;
    i++;
  }

  //Converting to two's compliment
  int twosComplimnet = ~answer + 1;

  cout << twosComplimnet;

  return 1;
}