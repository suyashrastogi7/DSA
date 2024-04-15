#include <iostream>
#include <stack>

using namespace std;

/*
Stack is a LI-FO (last in first out) type of DS
*/

int Stack() {

  // Initialise the stack
  stack<string> st;

  // Add element to stack
  st.push("Hello");

  // Remove element from stack
  st.pop();

  // Size of stack
  int size = st.size();

  // Top element of stack
  string top = st.top();

  // Is stack empty
  bool empty = st.empty();

  cout << size << empty  << top << endl;

  return 0;
}