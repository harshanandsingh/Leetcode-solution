// Last updated: 9/11/2025, 1:56:29 AM
class Solution {
public:
    bool wordPattern(string pattern, string s) {

        unordered_map<string,char>m;
        unordered_map<char,string>m1;

        s=s+" ";
        string t="";
        int k = 0;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                cout<<t<<endl;
                if(m.count(t) && m[t] != pattern[k]) return false; 
                else if(m1.count(pattern[k]) && m1[pattern[k]] != t) return false;
                else{
                    m[t]=pattern[k];
                    m1[pattern[k]] = t;
                    t="";
                }
                k++;
            }
            if(s[i] != ' ')  t+= s[i];
        }
        return k == pattern.size();
        
    }
};