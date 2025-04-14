// Last updated: 4/14/2025, 7:20:55 PM
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        
        int i=n-1;
        while(s[i]==' ') i--;
        if(i<0) return 0;
        int count=0;
        for(;i>=0;i--){
            if(s[i]!=' ') count++;
            else break;
        }

        return count;
    }
};