class Solution {
public:
    string removeDuplicates(string s, int k) {
        int slen = s.size();
    vector <pair<char,int>> freq;
    
    for(int i = 0; i<slen; i++)
    {   
        int top = freq.size()-1;
        
        if(top == -1 || freq[top].first != s[i])
        {
            freq.push_back({s[i],1});
            top++;
        }
        else
            freq[top].second ++;
        
        if(freq[top].second == k)
            freq.pop_back();
    }
    
    string ans;
    
    for(int i = 0; i<freq.size(); i++)
        ans.append(freq[i].second,freq[i].first);
    
    return ans;
    }
};