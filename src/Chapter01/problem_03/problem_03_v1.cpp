#include <iostream>
#include <utility>

int main() {

  using namespace std;

  int a, b; 
  cout << "Eneter two integer numbers whose Least common multiple would be calculated." <<endl;
  cout << "First number:" << endl;
  cin >> a;
  cout << "Second number:" << endl;
  cin >> b;

  if (a <= 0 or b <= 0) {
    throw std::runtime_error{ "calling LCM(m, n) with a negative or zero value" };
  }

  // Make sure that a is always the larger number 
  if (a < b) {
    b = exchange(a, b);
  } 

  int LCM = a*b;
  for ( int i{a}; i < a*b; ++i){
    if ((i % a == 0) & (i % b == 0)){
      LCM = i;
      break;
    }
  }

  string formated_string = format("The LCM between {} and {} is: {}", a, b, LCM);
  cout << formated_string << endl;

  return 0;
}