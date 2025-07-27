// Last updated: 7/27/2025, 12:09:25 PM
class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if(s1.size()>s2.size()) return false;
        int n = s2.size();

        int k = s1.size(); // this is the size of the window 

        vector<int>s1_f(26,0); // it will help to count the frequency of s1 string 
        vector<int>s2_f(26,0); // it will help to find that the s2 contains s1 or not andy permutaion of that 

        for(auto x:s1){ 
            s1_f[x-'a']++;
        }
        int j = 0;
        while(j<n){

            s2_f[s2[j]-'a']++;

            if(j >= k){
                s2_f[s2[j-k]-'a']--;
            }

            if(s1_f == s2_f) return true;

            j++;

        }
        return false;
    }
};