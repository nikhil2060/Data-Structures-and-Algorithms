class Solution {
public:

    bool checkDict(vector<string>& wordDict, string tempStr)
    {
        bool flag = false;

        for(auto x : wordDict)
        {
            if(x == tempStr)
            {
                flag = true;
            }
        }

        return flag;
    }

    bool helper(string &s, vector<string>& wordDict, int ind, string tempStr)
    {
        if(ind>=s.size()) return true;

        for(int i = ind; i<s.size();i++)
        {
            tempStr += s[i];
            if(checkDict(wordDict,tempStr))
            {   

                if(helper(s,wordDict, i+1 ,"")) return true;
            }

        }

        return false;

    }

    bool wordBreak(string s, vector<string>& wordDict) {
        
        return helper(s,wordDict,0,"");
    }
};