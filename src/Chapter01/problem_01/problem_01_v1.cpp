#include <iostream>

int main()
{
   unsigned int limit = 0;
   std::cout << "Upper limit: ";
   std::cin >> limit;

   unsigned long long sum = 0;
   for (size_t i{3}; i < limit; ++i)
   {
      if (i % 3 == 0 || i % 5 == 0)
         sum += i;
   }
   std::cout << "The sum of naturals smaller than " << limit << " divisible by 3 and 5 is: " << sum << std::endl;
}