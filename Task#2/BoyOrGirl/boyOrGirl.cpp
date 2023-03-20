#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<char> charSet;
    string s;
    cin >> s;
    int size = s.length(), distinct = 0;

    for(int i = 0; i < size; i++)
    {
        if(charSet.count(s[i]) == 0)
        {
            distinct++;
            charSet.emplace(s[i]);
        }

    }

    cout << ((distinct % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!");

    return 0;
}