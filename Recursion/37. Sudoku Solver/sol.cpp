class Solution {
public:

    bool checkValid (vector<vector<char>>& board, int x, int y, char num)
    {
        for(int row=0; row<board.size();row++)
        {
            if(board[row][y]==num)
            {
                return false;
            }
        }

        for(int col=0 ; col<board.size();col++)
        {
            if(board[x][col]==num)
            {
                return false;
            }
        }

        int startX = (x/3)*3;
        int startY = (y/3)*3;

        for(int i=startX; i<startX+3 ; i++)
        {
            for(int j= startY ; j< startY+3 ;j++)
            {
                if(board[i][j]==num)
                {
                    return false;
                }
            }
        }

        return true;
        
    }
    
    bool helper(vector<vector<char>>& board)
    {
        if(col >= board.size())
        {
            return true;
        }

        for(int row=0 ; row<board.size() ; row++)
        {
            if(board[row][col]=='.')
            {
                for(char i='1';i<='9';i++)
                {
                    if(checkValid(board,row,col,i))
                    {
                        
                        board[row][col]= i;
                        if(helper(board,col+1))
                        {
                            return true;
                        }
                        else
                        {
                            board[row][col]= '.';
                        }
                    }
                }
                return false;
            }
            helper(board,col+1);
        }

        

        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        helper(board);
    }
};