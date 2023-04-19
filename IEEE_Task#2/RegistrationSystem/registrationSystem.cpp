#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    string s;
    unordered_map<string,int> namePool;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        unordered_map<string, int>::iterator it = namePool.find(s);
        if(it == namePool.end())
        {
            namePool.insert({s,1});
            cout << "OK" << "\n";
        }
        else
        {
            cout << it->first << it->second << "\n";
            it->second += 1;
        }
    }
    return 0;
}