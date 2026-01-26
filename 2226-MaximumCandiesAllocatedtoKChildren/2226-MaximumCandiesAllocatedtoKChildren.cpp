// Last updated: 1/26/2026, 10:10:12 AM
1class Solution {
2public:
3    bool isPossible(vector<int>& candies, long long k, int x) {
4        long long count = 0;
5        for (int c : candies) {
6            count += c / x;  // Number of piles of size `x` we can create
7            if (count >= k) return true;  // If we have enough, no need to check further
8        }
9        return count >= k;
10    }
11
12    int maximumCandies(vector<int>& candies, long long k) {
13        // long long sum = 0;
14        // for (int c : candies) sum += c;
15        
16        // if (sum < k) return 0; // If total candies are less than k, return 0
17
18        int low = 1, high = *max_element(candies.begin(), candies.end()), ans = 0;
19        
20        while (low <= high) {
21            int mid = low + (high - low) / 2;
22            if (isPossible(candies, k, mid)) {
23                ans = mid; // Store the best possible value
24                low = mid + 1; // Try for a larger value
25            } else {
26                high = mid - 1; // Try for a smaller value
27            }
28        }
29        
30        return ans;
31    }
32};