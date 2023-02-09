class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int index=-1;
        
        int prefix_sum=0;
        
        
        int sum=0;
        
        int n=nums.size();
        
        
        for(int i=0;i<n;i++){
            
            sum+=nums[i];
        }
        
        
        for(int i=0;i<n;i++){
            
            if(prefix_sum==(sum-nums[i]-prefix_sum)){
                
                index=i;
                break;
            }
            
            prefix_sum+=nums[i];
        }
        
        return index;
    }
};