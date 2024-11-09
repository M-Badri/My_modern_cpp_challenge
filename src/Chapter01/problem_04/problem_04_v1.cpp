#include <iostream>
#include <vector> 

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
    if(data.second){if(data.first > LPN){LPN=data.first;};}
  }

  auto frmtd_str = format("The largest prime number smaller than {} is: {}", a, LPN);
  cout << "\n" << frmtd_str << endl;
  
  return 0;
}