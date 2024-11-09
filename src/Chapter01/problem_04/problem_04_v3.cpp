#include <iostream>
#include <utility>
#include <vector> 
#include <algorithm>



int main() {

  using namespace std;

  int a; 
  cout << "Enter the number to find the largest prime smaller than it : " << endl;
  cin >> a;

  vector<pair<int, bool>> dataList;

  for (auto i{2}; i<a; i++ ){
    dataList.push_back(make_pair(i, true));
  }

  for (auto i{0}; auto data : dataList){
    if(data.first){
      for (auto j = (data.first*data.first)-2; j<a-2; j++){
        if(dataList[j].first % data.first == 0){
          dataList[j].second = false;
        }
      }
    }
    i++;
  }

  auto LPN{0};
  for (auto i{0}; auto data : dataList){
    // cout << data.first << " " << data.second << endl; 
    if(data.second){if(data.first > LPN){LPN=data.first;};}
  }
  cout << LPN << "+++++++++++" << endl;



  auto max_it = std::max_element(dataList.begin(), dataList.end(),
                [](const std::pair<int, bool>& a, const std::pair<int, bool>& b){
                  if (!a.second) return true;
                  if (!b.second) return false;
                  return a.first < b.first;
                }        
  
  );

  cout << max_it->first << "**********" << endl;

  return 0;
}























  // vector<int> data;
  // vector<bool> flag(a, true);

  // for (auto i{0}; i<a; ++i){
  //   data.push_back(i+1);
  // }

  // for (auto i{1}; i<a; ++i){
  //   if (flag[i]){
  //     for (auto j=data[i]*data[i]; j<a; ++j ){
  //       if(j%data[i]==0){
  //         flag[j-1]=false;
  //       }
  //     }
  //   }
  // }


  //  for (auto i{0}; i<a-1; i++){
  //   cout << data[i] << " " << flag[i] << endl;
    // flag[i] = false;
  // }

  

  // string formated_string = format("The largest prime number smaller than {} is: {}", a, LPN);
  // cout << formated_string << endl;

