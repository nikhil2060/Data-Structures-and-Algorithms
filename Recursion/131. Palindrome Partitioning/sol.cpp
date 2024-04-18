class Solution {
public:
    bool checkPalindrome(string S, int start, int end) {
        int i = start;
        int j = end;

        while (i < j) {
            if (S[i] != S[j]) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }

    void helper(vector<vector<string>>& ans, vector<string> &tempVect, int idx,
                string s)
    {
        if(idx == s.size())
        {
            ans.push_back(tempVect);
            return;
        }


        for(int i = idx ; i<s.size(); i++)
        {
            if(checkPalindrome(s,idx,i))
            {
                tempVect.push_back(s.substr(idx, i-idx+1));
                helper(ans,tempVect,i+1,s);
                tempVect.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {

        vector<vector<string>> ans;

        vector<string> tempVect;

        helper(ans, tempVect, 0, s);

        return ans;
    }
};