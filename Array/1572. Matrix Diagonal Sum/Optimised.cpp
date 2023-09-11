class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int d1=0;
        int d2=0;
        
        int n=mat.size();
        int m=0;
        
        if(n%2!=0)
        {
            m=n/2;
            m=mat[m][m];
        }
        
        
        for(int i=0;i<mat.size();i++)
        {
            d1+=mat[i][i];
        }
        
        int i=0;
        int j=n-1;
        
        while(i<n && j>=0)
        {
            d2+=mat[i][j];
            i++;
            j--;
        }
        
        
        return d1+d2-m;
    }
};