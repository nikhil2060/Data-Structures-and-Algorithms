class Solution {
public:

    void helper(vector<int>&nums,vector<int>&temp, int ind,vector<vector<int>>&ans){

        if(ind>=nums.size()){
            ans.push_back(temp);
            return;
        }

        temp.push_back(nums[ind]);
        helper(nums,temp,ind+1,ans);
        temp.pop_back();
        helper(nums,temp,ind+1,ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>>ans;
        vector<int>temp;
        helper(nums,temp,0,ans);

        return ans;
    }
};