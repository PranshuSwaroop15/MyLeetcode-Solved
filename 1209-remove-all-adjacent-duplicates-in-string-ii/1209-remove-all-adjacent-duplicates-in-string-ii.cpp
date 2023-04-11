class Solution {
public:
    string removeDuplicates(string s, int k) {
        
        
//         Making stack using vector
        
        vector<pair<char,int>>st;
        
        for(auto i:s)
        {
            if(st.size()==0 || st.back().first!=i)
            {
                st.push_back({i,1});
            }
            else{
                st.back().second++;
            }
            
            if(st.back().second==k)
            {
                st.pop_back();
            }
        }
        
        string ans="";
        
        for(auto x:st){
            
            ans.append(x.second,x.first);
        }
        
        return ans;
    }
};