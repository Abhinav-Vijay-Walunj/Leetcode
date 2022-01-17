class Solution {
public:
    bool wordPattern(string pattern, string str) {
        istringstream strcin(str);
        string s;
        vector<string> vs;
        while(strcin >> s) vs.push_back(s);
        if (pattern.size() != vs.size()) return false;
        map<string, char> s2c;
        map<char, string> c2s;
        for (int i = 0; i < vs.size(); ++i) {
            if (s2c[vs[i]] == 0 && c2s[pattern[i]] == "") { 
                s2c[vs[i]] = pattern[i]; 
                c2s[pattern[i]] = vs[i]; 
                continue; 
            }
            if (s2c[vs[i]] != pattern[i]) return false;
        }
        return true;
        /*
        int p2i[26] {};
    unordered_map<string, int> w2i;
    
    istringstream in(str);
    int i = 0, n = pattern.size();
    for (string word; in >> word && i < n; ++i) {
        if (p2i[pattern[i] - 'a'] != w2i[word])
            return false;
        p2i[pattern[i] - 'a'] = w2i[word] = i + 1;
    }
    
    return i == n;
        
        int c=pattern.size();
        int temp=0;
        for(int i=0;i<pattern.size();i++)
        {
            for(int j=temp;j<s.size();j++)
            {
                if(pattern[i] == s[j])
                {
                    c--;
                    temp=j+1;
                }
            }
        }
        if(c == 0)
        {
            return true;
        }
        return false;
        */
    }
};