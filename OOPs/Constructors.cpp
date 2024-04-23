#include <iostream>

using namespace std;

class Hero {

public:
  int health;

  /*
  Constructors are functions that are invoked automatically during object
  creation. The default constructor

  Default constructor: Invoked during object creation and is created
  automatically by the class, can be created by the user too.

  Parameterized constructor: Constructor that takes one or more arguments during
  object creation.

  this : stores the address of the current object, it is a pointer that can be
  used to access the variables declared in the class

  Copy contructor: This constructor is automatically created by the class and
  takes an object as argument to create the new object and copy all values of
  the passed object to the new object. Copy constructor takes the object as a
  reference and not value to prevent copy loop. Default copy constructor uses
  shallow copy. Custom can be created to use deep copy.

  Note: If any constructor of class is created by the user then the default
  constructor is not created by the class and has to be created manually by the
  user
  */

  // Default
  Hero() { 
    cout << "Default constructor of class" << endl; 
  }

  // Parameterized
  Hero(int health) { 
    this -> health = health; 
  }

  // Copy constructor
  Hero(Hero &temp) { 
    this -> health = temp.health; 
  }
};

// int main(){
//   Hero h1;
//   Hero h2(30);
//   Hero h3(h1);
//   Hero *h4 = new Hero();
// }