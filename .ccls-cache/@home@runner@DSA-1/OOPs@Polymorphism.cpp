#include <iostream>

using namespace std;

/*
Polymorphism: Which exists in many forms. There are two types of polymorphism:
1. Complile time polymorphism: Static polymorphism
  Compile time polymorphism is of two types:
    a. Function overloading: Achieved by changing the parameters in similarly
    named functions to distinguish between them b. Operator overloading, change in only return type and not params are       invalid function overloading
    b. Operator overloading: 
2. Run time polymorphism: Dynamic polymorphism
  a. Method overriding: Process of modifying a parent class's function in the child class is called method overriding.
  Rules: 
  1. Function should have the same name in both parent and child class.
  2. Function should have the same params in both the parent and child class.
  3. It is possible through inheritance only
*/


// Function overloading
class A {
public:
  int n;

  void sayHello(){
    cout << "Hello!" << endl;
  }

  void sayHello(string name){
    cout << "Hello! " << name << endl;
  }

  int sayHello(string name, int n){
    cout << "Hello! " << name << " Age: " << n << endl;
    return n;
  }
};

// Operator Overloading

class B {
public: 
  int a;
  int b;

  int add(){
    return a + b;
  }

  // syntax: [return type] operator[operator] ([..operands]){...}
  int operator+ (B &obj){
    int value1 = this -> a;
    int value2 = obj.a;
    return value2 - value1;
  }
};

int call(){
  B a1, a2;
  a1.a = 4;
  a2.a = 6;
  int res = a1 + a2;
  return 0;
}