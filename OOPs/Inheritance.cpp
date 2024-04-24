#include <iostream>

using namespace std;

/*
  Inheritance: Process of inheriting members and functions of other classes into
  a class is called Inheritance.

  ex: A class Human Exists that has members such as age, height, etc. Now two
  classes called 'Male' and 'Female' are created that also contains the same
  properties, so rather than declaring again for male and female class we can
  make these classes inherit properties of the Human class.

  When a class inherits some properties and functions, copy of these are created
  for the new class and are available in the new class.

  The class that inherits is called the super class and the class that is
  derived is called the base class.

  Access Modes:
  1. Private data members of any class cannot be inherited.
  2. Public data members can be inherited in the form of access mode specified
  during inheritance.
  3. Protected data members accessed in public and protected mode act as
  protected but act as private in prvate mode.
  4. Data members inherited in the protected mode
  can be used in the class but cannot be accessed from the object of the class
*/

class Human {
public:
  int age;
  int height;
  int weight;

  int getAge() { return this->age; }

  int setWeight(int w) { this->age = w; }
};

class Male : public Human {
public:
  string color;

  string getColor() { return this->color; }
};

int call() {
  Male male1;
  // These attributes are not present in Male class but can be accesses since it
  // is inhertiting these properties from the human class in public mode.
  cout << "Age: " << male1.age << "Weight : " << male1.weight << endl;

  return 0;
}

/*
  Types of Inheritance:
  1. Single: A class -> B class
  2. Multiple: A class + B class -> C class
  3. Multi-level: A class -> B class -> C class
  4. Heirarchial: A class -> B class, A class -> C class
  5. Hybrid: Combination of more than one type of inheritance

  Inheritance Ambiguity: When a class inherits from two or more super classes
  that contain the same function, the compiler is confused which function to
  execute, to solve this scope resolution operator '::' is used
*/

// Ambiguity
class A {
public:
  int getRandom() { return rand(); }
};

class B {
public:
  int getRandom() { return rand(); }
};

class C : public A, public B {};

int ambiguity() {
  C c;
  // Throws ambiguity error
  // c.getRandom();

  // Solves ambiguity
  c.A::getRandom();
  c.B::getRandom();
  return 0;
}

// Single
class Animal {
public:
  int age;
};

class Dog : public Animal {
public:
  string color;
};

// Multi- level

class GermanShephard : public Dog {
public:
  bool pureOrMixed;
};

// Multiple

class Person : public Animal, public Human {
public:
  string name;
};
