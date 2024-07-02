//C++ Lambda expression allows us to define anonymous function objects (functors) 
//which can either be used inline or passed as an argument.


#include <iostream>
using namespace std;

int main() {

  // lambda function that takes two integer
  //  parameters and displays their sum
  auto add = [] (int a, int b) {
   cout << "Sum = " << a + b;
  };

  // call the lambda function
  add(100, 78);


  //lamda with return type
  auto operation = []  (int a, int b,  string op) -> double {
  if (op == "sum") {
    // returns integer value
    return a + b;
  } 
  else {
    // returns double value
    return (a + b) / 2.0;
  }
};

  return 0;
}
