class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // This Solution works only when ELEMENTS are asked
        // Not works for INDICES;
        
        vector<int>ans;

        sort(nums.begin(),nums.end());

        int left=0;
        int right=nums.size()-1;
        int el1;
        int el2;

        while(left<right)
        {
            if(nums[left]+nums[right]==target)
            {
                ans.push_back(nums[left]);
                ans.push_back(nums[right]);
                break;
            }
            else if(nums[left]+nums[right]<target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        return ans;

    }
};