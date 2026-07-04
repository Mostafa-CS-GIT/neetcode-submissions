class Solution 
{
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<int> ans(n, 1);
        
        // Step 1: Calculate prefix products
        // ans[i] will store the product of all elements to the left of index i
        int left_product = 1;
        for (int i = 0; i < n; ++i) {
            ans[i] = left_product;
            left_product *= nums[i];
        }
        
        // Step 2: Calculate suffix products on the fly
        // Multiply ans[i] by the product of all elements to the right of index i
        int right_product = 1;
        for (int i = n - 1; i >= 0; --i) {
            ans[i] *= right_product;
            right_product *= nums[i];
        }
        
        return ans;
    }
    };