class Solution {
public:
    bool pal(string s){
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i++]!=s[j--]) return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n;i++){
            if(pal(words[i])) return words[i];
        }
        return "";
    }
};