class Solution {
public:
    string removeOuterParentheses(string s) {
        int c=0;
        int n = s.length();
        string s1="";
        for(int i=0;i<n;i++){
            if((s[i]=='(' && c++ >0) || (s[i]==')' && --c >0)) s1+=s[i];
        }
        return s1;
    }

};