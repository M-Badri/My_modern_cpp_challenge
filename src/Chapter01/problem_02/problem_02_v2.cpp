#include <iostream>
#include <format>
#include <string>
#include <vector>
#include <numeric>  // accumulate
#include <algorithm>

std::vector<size_t> get_all_natural_numbers (size_t limit) {
   std::vector<size_t> ret{};
   for (size_t i{3}; i<limit; ++i){
      if(i % 5==0 || i % 3 == 0 ){
         ret.push_back(i);
      }
   }
   return ret;
}

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

   auto obtainedVec{get_all_natural_numbers(limit)};

   std::string firstMessage = std::format( 
        "The sum of all natural numbers divisible by either 3 or 5 and up to {} is {}.", 
        limit, 
        sum, 
        std::accumulate(std::cbegin(obtainedVec), std::cend(obtainedVec), static_cast<size_t>(0))
   ); 
   std::cout << firstMessage << std::endl;

   auto max_num = *max_element(obtainedVec.begin(), obtainedVec.end());
   auto min_num = *min_element(obtainedVec.begin(), obtainedVec.end());
   std::string secondMessage = std::format(
         "The maximum and minimum of these numbers are respectively, {} and {}.",
         max_num, min_num
   );
   std::cout << secondMessage << std::string(4, '\n');

}
