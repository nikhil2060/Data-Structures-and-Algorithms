class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        set<vector<int>>st; 
        int n= nums.size();
        
        for(int i=0;i<n;i++)
        {
            set<int>hashSet;
            for(int j=i+1;j<n;j++)
            {
                int x = -(nums[i]+nums[j]);
                if(hashSet.find(x)!=hashSet.end())
                {
                    vector<int>temp={nums[i],nums[j],x};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                hashSet.insert(nums[j]);
            }
        }

        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
}; 