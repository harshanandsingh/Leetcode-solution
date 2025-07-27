// Last updated: 7/27/2025, 9:19:21 AM
class Solution {
public:
    int characterReplacement(string s, int k) {
        int i = 0, j = 0, maxFreq = 0, maxLen = 0;
        unordered_map<char, int> count;

        while (j < s.size()) {
            // increse the frequency of the current element 
            count[s[j]]++;
            // now find the max frequeny in the current window 
            maxFreq = max(maxFreq, count[s[j]]);

            // if the size of the window - max frequency is more then k -> then we have used the option of convering more then k 
            while((j - i + 1) - maxFreq > k) {
                // so we have to decrese the size of the window -> now we reduce the size of the window 
                count[s[i]]--;
                i++;
            }

            // now check is it a max lenght substrng -> if so update the maxlength else let it be as it is 
            maxLen = max(maxLen, j - i + 1);
            j++;
        }

        return maxLen;
    }
};