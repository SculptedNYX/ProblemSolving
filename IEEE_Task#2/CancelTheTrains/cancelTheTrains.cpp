#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n, x, y, tmp;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int c = 0;
        set<int> numberSet;
        cin >> x >> y;
        for(int j = 0; j < x; j++)
        {
            cin >> tmp;
            numberSet.insert(tmp);
        }

        for(int j = 0; j < y; j++)
        {
            cin >> tmp;
            if(numberSet.count(tmp) == 1)
            {
                c++;
            }
        }
        cout << c << "\n";
    }
    return 0;
}

