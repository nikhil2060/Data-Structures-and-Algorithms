class Solution {
public:

    bool validate(vector<string> &board, int row, int col , int n)
    {
        int i= row;
        int j = col;

        while(j>=0)
        {
            if(board[row][j]=='Q') return false;
            j--;
        }

        i= row;
        j = col;

        while(j>=0 && i>=0)
        {
            if(board[i][j]=='Q') return false;
            j--;
            i--;
        }

        i= row;
        j = col;

        while(i<n && j>=0)
        {
            if(board[i][j]=='Q') return false;
            i++;
            j--;
        }

        return true;
    }

    void solver(vector<vector<string>>&ans, vector<string> &board, int col , int n )
    {
        if(col>=n)
        {
            ans.push_back(board);
            return;
        }

        for(int row=0 ;row< n ;row++)
        {
            if(validate(board,row,col,n))
            {
                board[row][col]='Q';
                solver(ans,board,col+1,n);
                board[row][col]='.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;

        vector<string> board(n, string(n,'.'));

        solver(ans,board,0,n);

        return ans;
    }
};