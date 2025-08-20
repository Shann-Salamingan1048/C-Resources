class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int complement;
        std::unordered_map<int, int> hash;
        for(int i = 0; i < nums.size(); ++i)
        {
            complement = target - nums[i];

            if(hash.find(complement) != hash.end())
                return { hash[complement], i};
            hash[nums[i]] = i;
        }
        return {};
    }
};