class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
 	
 	int n=matrix[0].size();

 	int row=0,col=0;

 	while(row<m)
 	{
 		int left=0,right=n-1;

 		while(left<=right)
 		{
 			int mid=(left+right)/2;

 			if(matrix[row][mid]==target)
 			{
 				return true;
 			}

 			else if(matrix[row][mid]>target)
 			{
 				right=mid-1;
 			}

 			else
 			{
 				left=mid+1;
 			}

 		}

 		row++;
 	}

 	return false;
    }
};