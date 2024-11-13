#include <iostream>
#include <vector>

int main() // The current version of this solution must be updated!
{
    using namespace std;

    auto n{0};
    cout << "Enter a number: " << endl;
    cin >> n;

    vector<pair<int, bool>> dataList;

    for (auto i{2}; i < n; i++)
    {
        dataList.push_back(make_pair(i, true));
    }

    for (auto data : dataList)
    {
        if (data.second)
        {
            for (auto j{data.first * data.first - 2 }; j < n-2; j++)
            {
                if (dataList[j].first % data.first == 0)
                {
                    dataList[j].second = false;
                }
            }
        }
    }

    for (auto data:dataList){
        cout << data.first << " " << data.second << endl;
    }

    return 0;
} // 