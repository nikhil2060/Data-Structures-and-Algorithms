class Solution {
public:

    void helper (string s, vector<string>&ans , int n , int nOpen , int nClosed ){

        if( nOpen==n && nClosed==n )
        {
           ans.push_back(s);
            return;
        }
        


       if(nOpen<n)
       {
            s= s+'(';
            nOpen++;

            helper(s,ans,n,nOpen,nClosed);

            s.pop_back();
            nOpen--;
       }

       if(nClosed < nOpen)
       {
        s=s+')';
        nClosed++;

        helper(s,ans,n,nOpen,nClosed);

        s.pop_back();
        nClosed--;
       }

    }

    vector<string> generateParenthesis(int n) {
        
        int nOpen = 0;
        int nClosed = 0;

        string s="";
        vector<string>ans;

        helper(s,ans,n,nOpen,nClosed);

        return ans;
    }
};