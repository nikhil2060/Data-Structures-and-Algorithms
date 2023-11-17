class Solution {
public:

    void helper(vector<int>& cand, int target, vector<int>&temp, vector<vector<int>>&ans,int ind)
    {
        if(ind>=cand.size() || target==0 )
        {
            if(target ==0)
            {
                ans.push_back(temp);
            }
            return;
        }

        if(target>=cand[ind])
        {
            int newTarget = target - cand[ind];
            temp.push_back(cand[ind]);
            helper(cand,newTarget,temp,ans,ind);
            temp.pop_back();
        }

        helper(cand,target,temp,ans,ind+1);
        
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>>ans;
        vector<int>temp;
        int i=0;
        helper(candidates,target, temp,ans,i);

        return ans;
    }
};