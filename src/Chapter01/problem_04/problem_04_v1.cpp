#include <iostream>
#include <utility>
#include <vector> 

int main() {

  using namespace std;

  int a, b; 
  cout << "Enter the number " << endl;
  cin >> a;

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