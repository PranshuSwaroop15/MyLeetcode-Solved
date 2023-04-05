class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n=nums.size();
	int count=0;
	for(int i=0;i<n;i++)
	{
//		 0,1,4,6,7,10
		for(int j=i+1;j<n;j++)
		{
			for(int k=j+1;k<n;k++)
				{
					if(nums[k]-nums[j]==diff && nums[j]-nums[i]==diff)
					{
						count++;
					}
				}
			
		}
        
    }

    return count;
    }
};