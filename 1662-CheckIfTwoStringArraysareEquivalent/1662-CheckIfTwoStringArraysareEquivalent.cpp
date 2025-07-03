// Last updated: 7/3/2025, 3:48:54 PM
class Solution {
public:
    string merg_string(vector<string> word){
        string s1="";
        for(string x:word){
            s1+=x;
        }
        return s1;
    }
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        return merg_string(word1)==merg_string(word2);
    }
};