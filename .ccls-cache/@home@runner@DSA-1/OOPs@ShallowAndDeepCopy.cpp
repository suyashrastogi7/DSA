#include <iostream>
#include <string.h>

using namespace std;

/*
 In shallow copy address stored in the pointer is shared by all instances of the
 class created using the default copy constructor, so on changing a property in
 one object causes the change in all the other objects of class, hence sharing
 of address should be avoided to aviod shallow copy
*/

class Hero {
public:
  int health;
  char level;
  // Char array pointer created to store the heap address
  char *name;

  Hero() {
    // Char array allocated space in heap on object creation
    name = new char[100];
  }

  Hero(int health, char level, char name[]) {
    this->health = health;
    this->level = level;
    this->name = name;
  }

  // To prevent shallow copy, custom copy constructor
  Hero(Hero &h) {
    // Allocates a new space in heap and stores its address in a pointer ch
    char *ch = new char[strlen(h.name) + 1];
    // copy the content of the passed argument into the heap
    strcpy(ch, h.name);
    // Assign the property of the new object to the newly created heap
    this->name = ch;
  }

  void print() {
    cout << "Health is:" << this->health << endl;
    cout << "Level is:" << this->level << endl;
    cout << "Name is:" << this->name << endl;
  }

  void setName(char name[]) { strcpy(this->name, name); }
};

// int main() {
//   char temp[10] = "Suyash";
//   Hero h1(70, 'A', temp);
//   Hero h2(h1);

//   h1.print();
//   h1.name[0] = 'X';
//   h2.print();
//   return 0;
// }