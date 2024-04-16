#include <iostream>

using namespace std;

class Hero {

  /*
  Access specifiers that tell about the access level of properties, they are
  of three types -> public, private and protected
  public: can be accessed within the class as well as outside class
  private: can be accessed withing the class and not outside the class
  protected:

  By default properties are private if no access specifier is written
  */
public:
  int age;
  int health;
  char level;

private:
  int speed;
  string name;

public:
  /*
  Getters and Setters: Used to access and modify the private members of a class
  these are public
  */
  // Getter
  string getName() { return name; }
  // Setter
  void setName(string temp) { name = temp; }
};

int create() {
  // Object of class Hero
  Hero superman;
  // public properties being accessed outside of class
  superman.age = 50;
  superman.health = 100;
  superman.level = 'A';

  // Setter called
  superman.setName("Superman");
  // Getter called
  string nameOfHero = superman.getName();

  /*
  Static and dynamic allocation:
  Static : Hero h1;
  Dynamic: Hero *h = new Hero;

  Dynamic allocation allocates a value in the heap and stores its address in a
  pointer
  */

  // Dynamic allocation of an object, here batman is a pointer that points to a
  // memory in heap created of the type Hero
  Hero *batman = new Hero;

  // To access its properties and methods, there are two ways.
  // 1. Dereferencing operator
  (*batman).setName("Batman");
  cout << (*batman).getName() << endl;
  // 2. Arrow operator
  batman->setName("Batman DC");
  cout << batman->getName() << endl;

  return 0;
}

// To Read:
// Padding and Greedy alignment