class Solution {
public:
    
    bool checkWin(vector<string>& board, char player)
    {
        // Check rows
        for (int i = 0; i < 3; i++) {
            if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
                return true;
        }
        
        // Check columns
        for (int j = 0; j < 3; j++) {
            if (board[0][j] == player && board[1][j] == player && board[2][j] == player)
                return true;
        }
        
        // Check diagonals
        if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
            return true;
        if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
            return true;
        
        return false;
    }
    bool validTicTacToe(vector<string>& board) {
        int n = (int)board.size();
        int xcount = 0 , ocount = 0;
        for(auto it : board)
        {
            for(char c : it)
            {
                if(c=='X')
                xcount++;
                else if(c=='O')
                ocount++;
            }
        }

        if(ocount>xcount || xcount-ocount>1) return false;
        bool xWins = checkWin(board,'X');
        bool oWins = checkWin(board,'O');

        if(xWins && oWins) return false;
        if(xWins && (xcount-ocount)!=1) return false;
        if(oWins && xcount!=ocount) return false;


        return true;
}
};