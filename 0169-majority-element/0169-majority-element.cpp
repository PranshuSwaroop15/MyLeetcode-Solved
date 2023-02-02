class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        
        int arr[100];
        int n=(int)nums.size();
        
        int count=n/2;
        
        for(int i=0;i<n;i++){
            
            mp[nums[i]]++;
        }
        
        for(auto x:mp){
            
            
            if(x.second>count){
                
                arr[0]=x.first;
            }
        }
            return arr[0];
    }
};