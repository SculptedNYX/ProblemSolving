#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    set<char> charSet;
    string s;
    getline(cin, s, '\n');
    int size = s.length(), distinct = 0;

    for(int i = 1; i < size-1; i += 3)
    {
        if(charSet.count(s[i]) == 0)
        {
            distinct++;
            charSet.emplace(s[i]);
        }

    }

    cout << distinct;

    return 0;
}