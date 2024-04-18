class Solution {
public:

    void helper(unordered_map<int,string> &umap, vector<string>&ans , int indx , string digits, string temp)
    {
        if(temp.size() == digits.size() )
        {
            ans.push_back(temp);
        }

        for(int i=0 ; i< umap[digits[indx]].size() ; i++)
        {
            helper(umap, ans , indx+1 , digits , temp+ umap[digits[indx]][i] );
        }
    }

    vector<string> letterCombinations(string digits) {
        
        unordered_map<int,string> umap;
        vector<string>ans;

        umap['2']="abc";
        umap['3']="def";
        umap['4']="ghi";
        umap['5']="jkl";
        umap['6']="mno";
        umap['7']="pqrs";
        umap['8']="tuv";
        umap['9']="wxyz";

        if(digits.size()>0) helper(umap,ans,0,digits,"");

        return ans;
        
    }
};q