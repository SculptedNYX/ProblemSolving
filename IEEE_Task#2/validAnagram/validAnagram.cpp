#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t)
    {
        int slen = s.length(), tlen = t.length();
        if(slen != tlen) {return false;}
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i = 0; i < slen; i++)
        {
            if(s[i] != t[i]) {return false;}
        }
        return true;
    }
};

int main()
{
    Solution s;
    cout << s.isAnagram("rat", "car");
    return 0;
}