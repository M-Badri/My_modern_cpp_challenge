#include <iostream>
#include <format>
#include <string>
#include <vector>
#include <numeric>  // accumulate
#include <algorithm>
#include <ranges>

int main()
{
   unsigned int limit = 0;
   std::cout << "Upper limit: ";
   std::cin >> limit;

   auto myVectRenge =  
      std::views::iota(1)  // Sets a series of infinite integer numbers starting from 1
   |  std::views::take(static_cast<long>(limit + 1)) // Eliminates the numbers after (limit + 1)
   |  std::views::filter([](auto i) { return (i % 3 == 0) or (i % 5 == 0); })
   |  std::ranges::to<std::vector<size_t>>(); // Moves a Range to a vector

   auto sum = std::accumulate(myVectRenge.begin(), myVectRenge.end(), 1);
   std::cout << "The summation of all numbers: " << sum << std::endl;
}
