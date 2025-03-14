class Solution {
public:
    bool isPossible(vector<int>& candies, long long k, int x) {
        long long count = 0;
        for (int c : candies) {
            count += c / x;  // Number of piles of size `x` we can create
            if (count >= k) return true;  // If we have enough, no need to check further
        }
        return count >= k;
    }

    int maximumCandies(vector<int>& candies, long long k) {
        long long sum = 0;
        for (int c : candies) sum += c;
        
        if (sum < k) return 0; // If total candies are less than k, return 0

        int low = 1, high = *max_element(candies.begin(), candies.end()), ans = 0;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (isPossible(candies, k, mid)) {
                ans = mid; // Store the best possible value
                low = mid + 1; // Try for a larger value
            } else {
                high = mid - 1; // Try for a smaller value
            }
        }
        
        return ans;
    }
};