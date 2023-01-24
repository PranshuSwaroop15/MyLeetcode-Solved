class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int count1_so_far=0;
        
        int max=INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            
            
            if(nums[i]==1){
                
                count1_so_far++;
            }
            
            if(count1_so_far>max){
                
                max=count1_so_far;
            }
            
            if(nums[i]!=1){
                
                count1_so_far=0;
            }
        }
        
        return max;
        
    }
};