#include <iostream>

using namespace std;

/*
  Static members are thosse that are part of a class and not of an object, they
  can be used without creating an object of class
*/

class Hero {
public:
  int health;
  static int TimeToComplete;

  // Static functions, can be called without creating object of class and does
  // not have this keyword
  static int getRandomValue() {
    // can access only static data members
    return TimeToComplete * rand();
  }
};

// '::' is called the scope resolution operator

int Hero::TimeToComplete = 5;

// int main() {
//   cout << "Time to complete" << Hero::TimeToComplete << endl;
//   Hero h1;
//   // Not recommended since static members are part of a class and should not be
//   // used with reference of an object, should be used with scope resolution
//   // operator
//   h1.TimeToComplete = 5;
// }
