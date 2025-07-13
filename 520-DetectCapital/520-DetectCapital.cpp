// Last updated: 7/13/2025, 10:29:43 AM
class Solution {
public:
    bool allcap(string s){
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z') return false;
        }
        return true;
    }
    bool allsmall(string s){
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]>='A' && s[i]<='Z') return false;
        }
        return true;
    }
    bool detectCapitalUse(string s) {

        if(s[0]>='A' && s[0]<='Z'){ 
            return allsmall(s.substr(1)) || allcap(s.substr(1)) ;
        }
        else{
            return allsmall(s.substr(1));
        }
    }
};