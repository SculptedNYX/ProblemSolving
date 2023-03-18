#include<iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> stairs;
    int n,tmp, count = -1;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        if(tmp == 1)
        {
            stairs.emplace_back(1);
            count++;
        }
        else
        {
            stairs[count]++;
        }
    }

    cout << stairs.size() << endl;
    for(auto it = stairs.begin(); it != stairs.end(); it++)
    {
        cout << (*it) << " ";
    }

    return 0;
}
