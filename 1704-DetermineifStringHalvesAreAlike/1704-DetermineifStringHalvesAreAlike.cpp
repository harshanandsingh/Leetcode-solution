// Last updated: 7/13/2025, 9:02:15 AM
class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size();
        // int i = 0; // first half 
        int j = n/2; // second half 
        int c_f=0; // count of the vowel in the first half 
        int c_s=0; // count of the vowel in the second half 
        
        for(int i=0;i<j;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' ||
            s[i]=='I' || s[i]=='O' || s[i]=='U') c_f++;
        }
        for(int i=j;i<n;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' ||
            s[i]=='I' || s[i]=='O' || s[i]=='U') c_s++;
        }
        return c_s == c_f ? true : false;
    }
};