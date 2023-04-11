class Solution {
public:
    string removeDuplicates(string s) {
    
        stack<char>st;
        int n=s.size();
        int i=0;
//      pushing into stack
        while(i<n)
        {
            if(st.empty() || st.top()!=s[i]){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
            
            
            i++;
        }

//      making a string
        string ans="";
        
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};