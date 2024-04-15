#include <iostream>
#include <queue>

using namespace std;

/*
Queue is like a line, that follows FIFO (first in first out)
*/

int Queue() {
  // Initialise the queue
  queue<string> q;

  // Add element to queue
  q.push("Hello");

  // Remove element from queue
  q.pop();

  // Size of queue
  int size = q.size();

  // Top element of queue
  string top = q.front();

  // Is queue empty
  bool empty = q.empty();

  return 0;
}