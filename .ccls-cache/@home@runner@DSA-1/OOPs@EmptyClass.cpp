#include <iostream>

using namespace std;

class Hero {
  //properties
};

class Villain {
  //properties
  int health;
  int level; 
};

void create(){
  Hero h1;
  Villain v1;
  // prints 1, just to assign significance to the object
  cout << "Size of empty class" << sizeof(h1) << endl;
  // prints 8, since size of an object is the total size of its properties
  cout << "Size of empty class" << sizeof(h1) << endl;
}