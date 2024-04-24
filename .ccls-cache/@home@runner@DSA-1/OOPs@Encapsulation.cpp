#include <iostream>

using namespace std;

/*
  Encapsulation: It is the process of wrapping up data members and functions
  into a single entity. A fully encapsulated class in one in which all the
  members of the class are private that is no other class can access its
  members. Also known as data hiding.

  Advantages:
  1. Hide data to increase security
  2. Classes can be marked as read only.
  3. Increases code reusability.
  4. Helps in unit testing

  Referencess:
  1.
  https://stackoverflow.com/questions/742341/difference-between-abstraction-and-encapsulation
  2.
  https://www.naukri.com/code360/guided-paths/basics-of-c/content/118817/offering/1382190
*/

class Student {
private:
  int id;
  char batch;

public:
  int getId() { return this->id; }
  char getBatch() { return this->batch; }
};

int main() {
  Student s1;
  cout << s1.getId() << " " << s1.getBatch() << endl;
  return 0;
}