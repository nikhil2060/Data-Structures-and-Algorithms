class Solution {
public:

    bool helper(vector<vector<char>>& board, string word , int ind , int x, int y)
    {
        if(ind == word.size())
        {
            return true;
        }

        if(x<0 || y<0 || x>=board.size() || y>=board[0].size() || word[ind]!= board[x][y] ) return false;

        int temp = board[x][y];
        board[x][y]='#';

        bool found = helper(board,word, ind+1 , x-1, y) || helper(board,word, ind+1 ,  x, y-1) || helper(board,word, ind+1 , x+1 , y) || helper(board,word, ind+1 , x, y+1);

        board[x][y]=temp;

        return found;

    }

    bool exist(vector<vector<char>>& board, string word) {

        for(int i=0 ; i<board.size() ;i++)
        {
            for(int j =0 ;j<board[0].size();j++)
            {
                if(helper(board,word, 0 , i, j))
                {
                    return true;
                }
            }
        }

        return false;
    }
};