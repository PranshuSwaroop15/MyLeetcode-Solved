class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>>res;
        
        sort(nums.begin(),nums.end());
        
        int n=(int)nums.size();
        
        
        for(int i=0;i<n;i++){
            
            int target=-nums[i];
            
            int front=i+1;
            
            int back=n-1;
            
            
            while(front<back){
                
                int sum=nums[front]+nums[back];
                
                if(sum<target){
                    front++;
                }
                else if(sum>target)
                {
                    back--;
                }
                else{
                    
                    vector<int>triplet={nums[i],nums[front],nums[back]};
                    
                    res.push_back(triplet);
                    
                    //             checking for duplication of number at index 1
                    while(front<back && nums[front]==triplet[1]){
                        front++;
                    }
//                   checking for duplication of number at index 2
                    while(front<back && nums[back]==triplet[2]){
                         back--;
                     }
                }
            }

//         checking for duplication of number at index 0
            while(i+1<n && nums[i+1]==nums[i]){
                 
                 i++;
        }
            
        }
       
        return res;
    }
};