#include <iostream>

using namespace std;

void update(int **p) {
  // this changes nothing for the orignal pointer, since it is passed by value
  p = p + 1;

  // This changes the value, since it is now passed by reference
  *p = *p + 1;

  // This changes the value, since it is now passed by reference
  **p = **p + 1;
}

void doublePointers() {

  int a = 5;

  // Single pointer
  int *p = &a;

  // Two level pointer, contains the address of pointer p
  int **p2 = &p;

  // Three level pointer, cointains the address of pointer p2
  int ***p3 = &p2;

  // gives 5, 5, 5
  cout << *p << **p2 << ***p3 << endl;

  update(p2);
}