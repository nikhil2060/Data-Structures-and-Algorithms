class Solution {
public:

    void helper(vector<string>&ans,string s, string expStr,int target, int ind,long currVal, long prevOperand)
    {
        if(ind>=s.size())
        {
            if(currVal == target)
            {
                ans.push_back(expStr);
            }
            return;
        }

        for(int i= ind;i < s.size();i++)
        {
            if(i>ind && s[ind]=='0') break;

            long x= stol(s.substr(ind,i-ind+1));
            string j= s.substr(ind,i-ind+1);

            if(i==0 || expStr=="")
            {
                helper(ans,s, expStr+j, target, i+1, x, x);
            }
            else
            {
                helper(ans,s,expStr+'+'+j,target,i+1,currVal+x,x);
                helper(ans,s,expStr+'-'+j,target,i+1,currVal-x,-x);
                helper(ans,s,expStr+'*'+j,target,i+1,(currVal-prevOperand)+(prevOperand*x),prevOperand*x);
            }
        }
    }
 
    vector<string> addOperators(string s, int target) {
        vector<string> ans;
        string expStr = "";
        int ind = 0;
        long currVal =0;
        long prevOperand = 0;

        helper(ans,s,expStr, target, ind, currVal, prevOperand);

        return ans;
    }
};