class Solution {
public:
    
    int SizeX,SizeY;
    int elementSum(int i,int j,vector<vector<int>>&sum)
    {
        if(i<0 || j<0) return 0;
        
        if(i>=SizeX) i=SizeX-1;
        
        if(j>=SizeY) j=SizeY-1;
       
        
        return sum[i][j];
        
    }
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        
        SizeX=mat.size();
        
        SizeY=mat[0].size();
        
        vector<vector<int>>sum(SizeX,vector<int>(SizeY,0));
//      Calculate the Prefix Sum
        
        for(int i=0;i<SizeX;i++){
            for(int j=0;j<SizeY;j++)
            {
                
                sum[i][j]=mat[i][j]+elementSum(i-1,j,sum)+elementSum(i,j-1,sum)-elementSum(i-1,j-1,sum);
                
            }
        }
     
        // Calculating our prefix sum
        
        vector<vector<int>>ans(SizeX,vector<int>(SizeY,0));
        
        
        
        for(int i=0;i<SizeX;i++)
        {
            for(int j=0;j<SizeY;j++)
            {
                ans[i][j]=elementSum(i+k,j+k,sum)-elementSum(i-k-1,j+k,sum)-elementSum(i+k,j-k-1,sum)+elementSum(i-k-1,j-k-1,sum);
            }
        }
        
        return ans;
    }
};