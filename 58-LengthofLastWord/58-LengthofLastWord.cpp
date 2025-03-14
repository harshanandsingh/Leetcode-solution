class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int k=0,count=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' '){
                k=1;
                count++;
            }
            else if(s[i]==' ' && k==1) break;
        }
        return count;
    }
};