#include <deque>
#include <iostream>

using namespace std;

/*
Pronounced as 'deck'
Also known as Double Ended Queue
Is used to access elements from the front as well as from the back
*/

int Deque() {

  // Initialization
  deque<int> d;

  // Initialization with size and pre-filled value 1
  deque<int> deq(5, 1);

  // Adds an element in the vector
  d.push_back(1);
  d.push_front(2);

  // Removes element from the last and front
  d.pop_back();
  d.pop_front();

  // Gets the number of elements in the deque
  int size = d.size();

  // Check if deque is empty or not
  bool empty = d.empty();

  // Gets the front and last element of the deque
  cout << d.front() << endl;
  cout << d.back() << endl;

  // Access element at specific index
  int el = d.at(1);

  // Erase the deque: @params (starting index, ending index)
  d.erase(d.begin(), d.begin() + 1);

  // Traversing the deque
  for (int i : d) {
    cout << i << endl;
  }

  return 0;
}