class Solution 
{
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) 
        {
            vector<int> arr;
            unordered_map<int, int> freq;
            for (int num : nums)
            {
                freq[num]++;
            }
            while(k>0)
            {
                int pivot;
                int max=0;
                for (int num : nums)
                {
                    if(freq[num]>max)
                    {
                        max=freq[num];
                        pivot=num;
                    }
                }
                nums.erase(remove(nums.begin(), nums.end(), pivot), nums.end());
                k--;
                arr.push_back(pivot);
                max=0;
            }
            return arr;
        }
};
