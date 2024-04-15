#include <iostream>

using namespace std;

int main(){
  
  int num = 5;

  // declare a pointer that stores the address of a value of type int 
  int *p = &num;

  // prints the value stored at address stored in the pointer p -> here value of num
  cout << "pointer value ==> " << *p << endl;
  // prints the address of num which is stored in p
  cout << "pointer address ==>" << p << endl;

  
  
  return 0;
}