#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int testCases, deckSize, tmp, currentIndex;

    cin >> testCases;
    
    for(int i = 0; i < testCases; i++)
    {
        vector<int> singleDecktmp;
        map<int, int> deckMap;

        cin >> deckSize;

        for (int j = 0; j < deckSize; j++)
        {
            cin >> tmp;
            singleDecktmp.emplace_back(tmp);
            deckMap.insert({tmp, j});
        }

        while(deckSize != 0)
        {
            currentIndex = deckMap.at(deckMap.rbegin()->first);

            for(int j = currentIndex; j < deckSize; j++)
            {
                cout << singleDecktmp[j] << " ";
                deckMap.erase(singleDecktmp[j]);
            }

            deckSize = deckSize - (deckSize - currentIndex);
        }


    }

    return 0;
}