// Last updated: 8/26/2025, 11:54:50 AM
class Solution {
public:
    string breakPalindrome(string p) {
        int n = p.size();

        if(n<=1) return ""; // we cant make it unpalindrom 
        int i = 0, j = n-1;

        while(i<j){
            if(p[i]!='a'){
                p[i]='a';
                return p;
            }
            i++;
            j--;
        }
        p[n-1]='b';
        return p;
    }
};