class Solution 
{
    public:
        int firstMissingPositive(vector<int>& nums) 
        {
    int n = nums.size();
    
    // Step 1: Place each number in its correct position
    // Numbers should be at index (num - 1) if num is in range [1, n]
    for (int i = 0; i < n; i++) {
        while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
            swap(nums[i], nums[nums[i] - 1]);
        }
    }
    
    // Step 2: Find the first missing positive
    for (int i = 0; i < n; i++)
     {
        if (nums[i] != i + 1) 
        {
            return i + 1;
        }
    }
    
    // Step 3: All numbers 1 to n are present
    return n + 1;
}
};