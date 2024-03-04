class Solution {
public:
    void helper(vector<vector<int>>&ans,vector<int>&temp,int k, int target , int sum ,int ind){
        
        if(k==0 || sum>target)
        {
            if(sum==target)
            {
                ans.push_back(temp);
            }
            return;
        }

        for(int i=ind ; i<=9 ; i++)
        {
            sum+=i;
          
            temp.push_back(i);
            k--;

            helper(ans,temp,k,target,sum ,i+1);

            k++;
            temp.pop_back();
            sum-=i;
            
        }

    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>temp;
        int sum =0 ;
        int ind = 1; 

        helper(ans,temp,k,n,sum,ind);
        return ans;
    }
};