class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n=(int)nums.size();
        int pt1=0;
        
        
        for(int i=0;i<n;i++){
            
            if(nums[i]!=0){
                
                nums[pt1]=nums[i];
                pt1++;
            }
            
           
        }
        
        
        for(int i=pt1;i<n;i++){
            
            nums[i]=0;
        }
        
    }
};