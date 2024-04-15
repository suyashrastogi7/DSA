#include <iostream>
#include <vector>

using namespace std;

int Vector() {

  // Initialization
  vector<int> v;

  // Initialization with size and pre-filled value 1
  vector<int> vec(5, 1);

  // Adds an element in the vector
  v.push_back(1);
  v.push_back(2);

  // Removes element from the last
  v.pop_back();

  // Gets the number of elements in the vector
  int size = v.size();

  // Gets the Total capacity of the array
  int capacity = v.capacity();

  // Check if vector is empty or not
  bool empty = v.empty();

  // Gets the front and last element of the Array
  cout << v.front() << endl;
  cout << v.back() << endl;

  // Access element at specific index
  int el = v.at(1);

  cout << size << capacity << empty << el << endl;

  // Clear the vector
  v.clear();

  // Traversing the vector
  for (int i : v) {
    cout << i << endl;
  }

  return 0;
}