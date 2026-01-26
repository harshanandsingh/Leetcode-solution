// Last updated: 1/26/2026, 12:51:11 PM
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string sum1="";
        for(int i=0;i<word1.size();i++){
            sum1 += word1[i];
        }
        string sum2="";
        for(int i=0;i<word2.size();i++){
            sum2 += word2[i];
        }
        if(sum1==sum2) return true;
        return false;
    }
};