#include <iostream>
#include <map>

using namespace std;

int Map() {
  map<int, string> m;

  m[1] = "Hello";
  m[2] = "Good Morning";

  m.insert({3, "Mohito"});

  for (auto i : m) {
    cout << i.first << endl;
  }

  m.erase(2);

  return 0;
}