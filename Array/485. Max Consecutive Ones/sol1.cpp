class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxi=0;
        bool flag=true;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                flag=true;
            }
            else
            {
                flag=false;
            }
            
            if(flag==true)
            {
                count++;
                maxi=max(count,maxi);
            }
            else
            {
                count=0;
            }
        }
        
        return maxi;
    }
};

21
1 0 0 1 1 1 1 1 0 0 0 1 1 1 1 0 1 0 1 0 1
4