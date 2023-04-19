#include <iostream>
#include <vector>
using namespace std;

vector<int> rotateLeft(int d, vector<int>& arr);

int main()
{
    vector<int> result = {1,2,3,4,5};
    rotateLeft(2, result);
    for(auto it = result.begin(); it != result.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}

vector<int> rotateLeft(int d, vector<int>& arr) {
    for (int i = 0; i < d; i++)
    {
        arr.emplace_back(*arr.begin());
        arr.erase(arr.begin());
    }

    return arr;
}