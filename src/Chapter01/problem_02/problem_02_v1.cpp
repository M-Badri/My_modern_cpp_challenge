#include <stdexcept>  // runtime_error
#include <utility>  // exchange
#include <iostream>


int main () {
    
   using namespace std;

   cout << "You should give me two numbers for which Greatest Common Divisor would be calculataed" << endl;
   cout << "Enter the first one:" << endl;
   int a, b;
   cin >> a;
   cout << "Enter the second one:" << endl;
   cin >> b;

   if (a <= 0 or b <= 0) {
      throw std::runtime_error{ "calling gcd(m, n) with a negative or zero value" };
   }

   // Make sure that a is always the larger number 
   if (a < b) {
      b = exchange(a, b);
   } 
  
   int GCD = 1;
   for (auto i{b}; i > 0; --i ){
      if((b % i) == 0 &&  (a % i) == 0){
         GCD = i;
         break;
      }
   }
   string formated_string = format( "The GCD between {} and {} is: {}", a, b, GCD );
   cout << "\n"<< formated_string << endl; 
   return 0;
}