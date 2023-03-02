class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        
        
        bool c[4];
        
        memset(c,true,sizeof(c));
        
        int N=mat.size();
        
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                
                if(mat[i][j]!=target[i][j]) c[0]=false;
                
                if(mat[N-j-1][i]!=target[i][j]) c[1]=false;
                
                 if(mat[N-i-1][N-j-1]!=target[i][j]) c[2]=false;
                
                if(mat[j][N-i-1]!=target[i][j]) c[3]=false;
            }
        } 
        
        return c[0]||c[1]||c[2]||c[3];
    }
};