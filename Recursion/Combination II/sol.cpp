class Solution {
public:

    void helper(vector<int>& cand, int target, vector<int>&temp, vector<vector<int>>&ans,int ind)
    {

        if(target==0)
        {
            ans.push_back(temp);
            return;
        }
            

        for(int i=ind;i<cand.size();i++)
        {
            if(i>ind && (cand[i]==cand[i-1])) continue;

            if(target<cand[i]) break;

            temp.push_back(cand[i]);

            helper(cand,target-cand[i],temp,ans,i+1);

            temp.pop_back();
        }
        
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        vector<vector<int>>ans;
        vector<int>temp;
        int i=0;
        sort(candidates.begin(),candidates.end());
        helper(candidates,target, temp,ans,i);

        return ans;
    }
};