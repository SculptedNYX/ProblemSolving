#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {
        unordered_map<int,int> numMap;
        int size = nums.size();
        for(int i = 0; i < size; i++)
        {
            if(numMap.count(nums[i]))
            {
                if(i - numMap[nums[i]] <= k)
                {
                    return true;
                }
            }
            numMap[nums[i]] = i;
        }
        return false;
        
    }
};

int main()
{
    


    return 0;
}