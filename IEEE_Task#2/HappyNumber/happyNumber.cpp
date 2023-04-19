#include <iostream>
#include <set>

using namespace std;

class Solution {
public:
    static bool isHappy(int n) {
        set<int> numSet;
        numSet.insert(n);
        int repeated = 0;
        while(repeated != 1)
        {
            int tmp = 0;
            while(n != 0)
            {
                tmp += (n%10)*(n%10);
                n = n/10;
            }
            n = tmp;
            if(n == 1) {return true;}
            if(numSet.count(n) == 0)
            {
                numSet.insert(n);
            }
            else
            {
                repeated = 1;
            }
        }

        return false;
    }
};

int main()
{

    
    return 0;
}

