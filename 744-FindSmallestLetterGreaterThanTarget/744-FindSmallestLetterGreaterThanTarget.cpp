// Last updated: 5/1/2025, 7:18:38 PM
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low = 0, high = letters.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (letters[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        // low is now the first index where letters[low] > target
        // or past the end (wrap around)
        return low < letters.size() ? letters[low] : letters[0];
    }
};