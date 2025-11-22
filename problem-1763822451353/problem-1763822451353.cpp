// Last updated: 11/22/2025, 8:10:51 PM
class Solution {
public:
    string bin(int n){
        string s ="";
        while(n){
            int temp = n&1;
            s+=temp;
            n=n>>1;
        }
        return s;
    }
    int minimumFlips(int n) {
        string s = bin(n);
        string s1 = s;
        reverse(s.begin(),s.end());
        int count = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=s1[i]) count++;
        }
        return count;
        
    }
};