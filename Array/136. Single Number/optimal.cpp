class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        auto ans=0;
        for(auto x:nums)
        {
            ans^=x;
        }
        
        return ans;
    }
};