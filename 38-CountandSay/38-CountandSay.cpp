// Last updated: 6/12/2025, 10:00:03 PM
class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1"; // base case 

        string s = countAndSay(n-1); // recursion 

        int j=0; // the processing 
        int k = s.size();
        string res ="";
        while(j<k){
            int count = 0;
            char c = s[j];

            while(j<k && c==s[j]){
                j++;
                count++;
            }
            res+=to_string(count)+string(1,c);
        }
        return res;
    }
};