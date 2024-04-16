#include <iostream>

using namespace std;

int main() {

  int num = 5;

  // declare a pointer that stores the address of a value of type int
  int *p = &num;

  // prints the value stored at address stored in the pointer p -> here value of
  // num
  cout << "pointer value ==> " << *p << endl;
  // prints the address of num which is stored in p
  cout << "pointer address ==>" << p << endl;

  // Updates the value stored in pointer p by adding 1 to it
  (*p)++;

  // value associated with the pointer p is also updated
  num++;

  double d = 5.4;

  // Pointer the stores the address of double type
  double *p2 = &d;

  // gives the size of the pointer, here num is of int type and has size of 4,
  // but since a pointer stores the address, its size if of 8 bytes
  cout << sizeof p << endl;  // 8
  cout << sizeof *p << endl; // 4

  // Never do this, since its a bad practice because the pointer is by default
  // initialized to some random address that may or may not belong to the
  // program memory
  int *ptr;

  // Always initialize a pointer, assign it a value of 0 to make it a null
  // pointer
  int *null_ptr = 0;

  // copying a pointer, this stores the address of the value pointed by p
  int *temp_ptr = p;

  // this gives the value of num, which was also pointed by p
  cout << (*temp_ptr) << endl;

  // Pointer arithmetics
  int i = 3;
  int *pointer = &i;
  // this will increment the address stored in pointer by 4 bytes since int is
  // of 4 bites, not it points to another memory location
  pointer = pointer + 1;
  cout << pointer << endl;

  // With arrays
  int arr[10] = {0, 2, 5};

  // pointer to first element
  cout << arr << endl;
  // address of the value pointed by the first pointer
  cout << &arr[0] << endl;

  cout << arr[0] << endl;
  // address is incremented by 4 bytes to reach new element, arr[1]
  cout << *(arr + 1) << endl;

  // arr[i] = *(arr + i)
  // or
  // i[arr] = *(i + arr) => this is also a valid syntax

  // Addresses in symbol table cannot be changed
  // arr = arr + 1 => is an invalid statement
  // when an external pointer points to arr[0], then its address can be changed
  // by adding 1 to it

  // for character arrays

  int a[5] = {1, 2, 3, 5, 6};

  // char arrays need to have a null value at last, to indicate ending of array
  char ch[5] = "abcd";

  // prints the address of 0th element
  cout << a << endl;
  // print the entire content of the char array, since cout implementation is
  // diff for integer and character arrays
  cout << ch << endl;

  return 0;
}