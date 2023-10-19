// MAJORITY ELEMENT 2
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int num1=-1;
        int num2=-1;
        int c1=0;
        int c2=0;
        int n= nums.size();

        vector<int>ans;

        for(auto el : nums)
        {
            if(el ==num1) c1++;
            else if(el==num2) c2++;
            else if(c1==0)
            {
                num1=el;
                c1=1;
            }
            else if(c2==0)
            {
                num2=el;
                c2=1;
            }
            else
            {
                c1--;
                c2--;
            }
        }

        c1=0;
        c2=0;
        
        for(auto el : nums)
        {
            if(el == num1) c1++;
            if(el == num2 && num1!=num2) c2++;
        }

        if(c1>(n/3))
        {
            ans.push_back(num1);
        }

        if(c2>(n/3))
        {
            ans.push_back(num2);
        }

        return ans;
    }
};