class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int,int>mp;
        
        
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        
        set<int>s;
        
        for(auto i=mp.begin();i!=mp.end();i++){
            
            s.insert(i->second);
        }
        
        return mp.size()==s.size()?true:false;
    }
};