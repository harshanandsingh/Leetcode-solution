// Last updated: 1/26/2026, 12:33:41 PM
1class Solution {
2public:
3    string merg_string(vector<string> word){
4        string s1="";
5        for(string x:word){
6            s1+=x;
7        }
8        return s1;
9    }
10    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
11        
12        return merg_string(word1)==merg_string(word2);
13    }
14};