#include <iostream>
#include <list>

using namespace std;

/*
It is basically doubly linked list.
*/

int List() {
  // Initialization
  list<int> l;
  list<int> ll(5, 100);

  // Adds an element in the list
  l.push_back(1);
  l.push_front(2);

  // Removes an element in the list
  l.pop_back();
  l.pop_front();

  // Number of element in the list
  l.size();

  // Is the list empty
  l.empty();

  // Erases all elements in the list
  l.clear();

  for (int j : l) {
    cout << j << " ";
  }

  return 0;
}