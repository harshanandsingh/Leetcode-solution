// Last updated: 1/25/2026, 7:03:25 PM
1class Solution {
2public:
3    char nextGreatestLetter(vector<char>& letters, char target) {
4        int low = 0, high = letters.size() - 1;
5        while (low < high) {
6            int mid = low + (high - low) / 2;
7            if (letters[mid] > target)
8                high = mid;
9            else
10                low = mid + 1;
11        }      
12        return letters[high]>target ? letters[high] : letters[0];
13
14
15        //return high < letters.size() ? letters[high] : letters[0];
16    }
17};