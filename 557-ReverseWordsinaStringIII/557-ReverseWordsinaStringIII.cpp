class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int i=0;
         while (i < n) {
            // Find the start of a word
            while (i < n && s[i] == ' ') i++;  
            int j = i;  

            // Find the end of the word
            while (j < n && s[j] != ' ') j++;  

            // Reverse the word
            reverse(s.begin() + i, s.begin() + j);

            // Move to the next word
            i = j;
        }
        return s;
    }
};