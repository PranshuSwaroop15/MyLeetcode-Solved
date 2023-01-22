class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
//         [1,1,0,1,1,1]
        int count1=0;
        
        int max=INT_MIN;
        
        for(int i=0;i<=nums.size()-1;i++){
            
            if(nums[i]==1){
                
                count1++;
            }
            
            if(nums[i]!=1){
                
                count1=0;
                
            }
            if(count1>max){
                    
                 max=count1;
                    
                    
            }
            
            
        }
        
        return max;
        
    }
};