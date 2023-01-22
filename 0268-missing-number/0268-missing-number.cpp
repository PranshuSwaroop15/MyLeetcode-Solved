class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int sum=0;
        
        int sum1=0;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            
            sum=sum+nums[i];
            sum1=sum1+i+1;
        }
        
        
        int ans=sum1-sum;
        
        return ans;
        
    }
};