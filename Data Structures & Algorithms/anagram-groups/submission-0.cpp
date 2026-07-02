class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string, vector<string>> anagramGroups;
        for (const string& s : strs) 
        {
            string sortedKey = s;
            sort(sortedKey.begin(), sortedKey.end());
            anagramGroups[sortedKey].push_back(s);
        }
        vector<vector<string>> result;
        for (auto& group : anagramGroups) 
        {
            result.push_back(group.second);
        }
        
        return result;
    }
};