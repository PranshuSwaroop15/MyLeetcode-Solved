class Solution {
public:
    
    int helper(vector<int>& nums,int n,int divisor)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=(nums[i]/divisor);
            
            if(nums[i]%divisor!=0)
            {
                sum+=1;
            }
            
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int n=nums.size();
        
        int low=1;
        int high= *max_element(nums.begin(),nums.end());
        
        int ans=high;
        while(low<=high)
        {
            int mid=(low+high)/2;
            
            if(helper(nums,n,mid)<=threshold){
                
                ans=mid;
                
                high=mid-1;
            }
            
            else{
                low=mid+1;
            }
            
        }
        
        return ans;
    }
};