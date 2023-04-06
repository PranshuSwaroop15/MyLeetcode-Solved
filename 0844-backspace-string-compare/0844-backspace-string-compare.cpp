class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        int n=s.length();
	int m=t.length();

	stack<char>st1,st2;

	for(int i=0;i<n;i++)
	{

		if(!(st1.empty()) && s[i]=='#')
		{
			st1.pop();
		}
		else if(s[i]!='#')
		{
			st1.push(s[i]);
		}
	}

	for(int i=0;i<m;i++)
	{

		if(!(st2.empty()) && t[i]=='#')
		{
			st2.pop();
		}
		else if(t[i]!='#')
		{
			st2.push(t[i]);
		}
	}

	return st1==st2;
    }
};