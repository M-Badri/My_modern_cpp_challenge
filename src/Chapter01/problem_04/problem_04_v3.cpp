#include <iostream>
#include <vector> 

int main() {

  using namespace std;

  int a; 
  cout << "Enter the number to find the largest prime smaller than it : " << endl;
  cin >> a;

  vector<int> data;
  vector<bool> flag(a, true);

  for (auto i{0}; i<a; ++i){
    data.push_back(i+1);
  }

  for (auto i{1}; i<a; ++i){
    if (flag[i]){
      for (auto j=data[i]*data[i]; j<a; ++j ){
        if(j%data[i]==0){
          flag[j-1]=false;
        }
      }
    }
  }

  int LPN{0};
  for (auto i{size(data)-2}; i>0; i--){
    if(flag[i]) {
      LPN = data[i];
      break;
    } 
  }

  string formated_string = format("The largest prime number smaller than {} is: {}", a, LPN);
  cout << formated_string << endl;
  return 0;
}