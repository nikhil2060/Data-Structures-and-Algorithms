class Solution {
public:

    void generateSubset(int ind , vector<int>&nums , vector<vector<int>> &ans, vector<int>&temp)
    {

        ans.push_back(temp);

        for(int i= ind ; i<nums.size() ;i++)
        {
            if(i>ind && nums[i]==nums[i-1]) continue;

            temp.push_back(nums[i]);

            generateSubset(i+1,nums,ans,temp);

            temp.pop_back();

        }

        
        

    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        vector<vector<int>>ans;

        vector<int>temp;

        generateSubset(0,nums,ans,temp);

        return ans;

    }
};