class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
          set<vector<int>>st; 
        int n= nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(nums[i]+nums[j]+nums[k] ==0)
                    {
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[k]);
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                        break;
                    }
                }
            }
        }

        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
};