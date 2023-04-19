#include <iostream>
#include <vector>
using namespace std;

void arrayDivider(vector<int> mainVector);
void arrayDisplay(vector<int> v);

int main()
{
    vector<int> v;
    int n, tmp;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        v.emplace_back(tmp);
    }

    arrayDivider(v);

    return 0;
}

void arrayDivider(vector<int> mainVector)
{
    vector<int> negativeVector, positiveVector, zeroVector;

    for(auto it = mainVector.begin(); it != mainVector.end(); it++)
    {
        if((*it) < 0)
        {
            negativeVector.emplace_back(*it);
        }
        else if ((*it) > 0)
        {
            positiveVector.emplace_back(*it);
        }
        else
        {
            zeroVector.emplace_back(*it);
        }
    }

    if(positiveVector.size() == 0)
    {
        for(int i = 0; i < 2; i++)
        {
            positiveVector.emplace_back(negativeVector.back());
            negativeVector.erase(negativeVector.end()-1);
        }
    }

    if(negativeVector.size() % 2 == 0)
    {
        zeroVector.emplace_back(negativeVector.back());
        negativeVector.erase(negativeVector.end()-1);
    }

    arrayDisplay(negativeVector);
    cout << endl;
    arrayDisplay(positiveVector);
    cout << endl;
    arrayDisplay(zeroVector);
    
}

void arrayDisplay(vector<int> v)
{
    cout << v.size() << " ";
    for(auto it = v.begin(); it != v.end(); it++)
    {
        cout << " " << *it;
    }
}