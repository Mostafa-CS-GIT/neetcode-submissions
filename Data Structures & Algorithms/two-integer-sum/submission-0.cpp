class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> numMap;
        for (int i = 0; i < nums.size(); i++) 
        {
            int complement = target - nums[i];
            if (numMap.find(complement) != numMap.end()) 
            {
                int j = numMap[complement];
                if (i < j) 
                {
                    return {i, j};
                } else {
                    return {j, i};
                }
            }
            numMap[nums[i]] = i;
        }
        return {};
    }
};