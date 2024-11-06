#include <iostream>
// #include <mdspan/mdspan.hpp>
#include <format>
#include <string>
#include <vector>
#include <numeric>  // accumulate
#include <algorithm>
#include <ranges>


// std::vector<size_t> get_all_natural_numbers (size_t limit) {
//    std::vector<size_t> ret{};
//    for (size_t i{3}; i<limit; ++i){
//       if(i % 5==0 || i % 3 == 0 ){
//          ret.push_back(i);
//       }
//    }
//    return ret;
// }

int main()
{
   // unsigned int limit = 0;
   // std::cout << "Upper limit: ";
   // std::cin >> limit;

   // unsigned long long sum = 0;
   // for (size_t i{3}; i < limit; ++i)
   // {
   //    if (i % 3 == 0 || i % 5 == 0)
   //       sum += i;
   // }

   // auto obtainedVec{get_all_natural_numbers(limit)};

   // std::string firstMessage = std::format( 
   //      "The sum of all natural numbers divisible by either 3 or 5 and up to {} is {}.", 
   //      limit, 
   //      sum, 
   //      std::accumulate(std::cbegin(obtainedVec), std::cend(obtainedVec), static_cast<size_t>(0))
   // ); 
   // std::cout << firstMessage << std::endl;

   // auto max_num = *max_element(obtainedVec.begin(), obtainedVec.end());
   // auto min_num = *min_element(obtainedVec.begin(), obtainedVec.end());
   // std::string secondMessage = std::format(
   //       "The maximum and minimum of these numbers are respectively, {} and {}.",
   //       max_num, min_num
   // );
   // std::cout << secondMessage << std::string(4, '\n');



  std::vector<int> ints{0,1,2,3,4,5,6};
  auto even = [](int i){ return 0 == i % 2; };
  auto square = [](int i) { return i * i; };

   for (int i : ints | std::views::filter(even) | std::views::transform(square)) {
   //  std::cout << i << ' ' << std::endl;
   }

   // std::vector<size_t> naturals_divisible_by_3_or_5_up_to_limit_v2(size_t limit) {
   //      return 
        int limit = 10;
      //   auto v{
      auto myVectRenge =
           std::views::iota(1)
         | std::views::take(static_cast<long>(limit + 1))
         | std::views::filter([](auto i) { return (i % 3 == 0) or (i % 5 == 0); })
         | std::ranges::to<std::vector<size_t>>();
      //        }
   //  }  

   auto tt = std::accumulate(myVectRenge.begin(), myVectRenge.end(), 1.f);
   // for (auto number : myVect){
      std::cout << "number" << tt << std::endl;
   // }
   // std::cout << "The sumsation is: " << std::accumulate(myVect.begin(), myVect.end(), 0) <<std::endl;
   // std::cout << "\n";


   // auto mySum = std::accumulate(
   //         std::views::iota(0)
   //       | std::views::take(static_cast<long>(limit + 1))
   //      | std::views::filter([](auto i) { return (i % 3 == 0) or (i % 5 == 0); })
   //       | std::ranges::to<std::vector<size_t>>() );


//   std::vector<double> floats{2.4,1.1,9.7,6.3};
//    auto intss = floats | std::ranges::to<std::vector<int>>();
//    // ints == {2, 1, 9, 6}

//    for (auto number : intss){
//       std::cout << number << std::endl;
//    }

//    std::cout << std::endl;

   std::vector<double> floats{2.4,1.1,9.7,6.3,12.55};
   for (auto idx{0}; auto& value : floats) {
      std::cout << idx << ": " << value << '\n';
      value += 11;
      ++idx;
   }

   for (auto idx = 0, idxx{1}; auto& value : floats) {
      std::cout << idx << "," << idxx << ": " << value << '\n';
      // value =+ 10;
      ++idx;
      ++idxx;
      }

      // std::cout << "Aij:" << "ddddddddddd";

      // int N = 10;
      // auto Aij = std::ranges::views::cartesian_product(  
      //    std::ranges::iota_view(0,N), // Amd.extent(0)), argument deduction fails
      //    std::ranges::iota_view(0,N) // Amd.extent(1));
      //    );
   
      std::vector<int> data{1,2,3,4};
      auto ms = std::mdspan(data,2,2);
      std::cout << "mdspan " << ms[1, 1] << "\n";


}
