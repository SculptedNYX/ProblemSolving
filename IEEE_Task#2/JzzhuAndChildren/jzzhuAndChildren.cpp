#include <iostream>
#include <vector>
using namespace std;

class Child
{
    public:
        int index;
        int value;
        Child(int index, int value)
        {
            this->index = index;
            this->value = value;
        }
};

int lastChild(vector<Child> childrenLine, int m);

int main()
{   
    vector<Child> childrenLine;
    int n,m,tmp;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        Child c(i,tmp);
        childrenLine.emplace_back(c);
    }

    cout << lastChild(childrenLine,m);
    return 0;
}

int lastChild(vector<Child> childrenLine, int m)
{
    while(childrenLine.size() > 1)
    {
        if((childrenLine[0].value - m) > 0)
        {
            childrenLine[0].value = childrenLine[0].value - m;
            childrenLine.emplace_back(childrenLine[0]);
            childrenLine.erase(childrenLine.begin());
        }
        else
        {
            childrenLine.erase(childrenLine.begin());
        }
    }

    return childrenLine[0].index + 1;
}