#include <iostream>
#include <vector>

int main()
{
    using namespace std;

    auto n{0};
    cout << "Enter a number: " << endl;
    cin >> n;

    vector<pair<int, bool>> dataList;

    for (auto i{0}; i < n; i++)
    {
        dataList.push_back(make_pair(i, false));
    }
}