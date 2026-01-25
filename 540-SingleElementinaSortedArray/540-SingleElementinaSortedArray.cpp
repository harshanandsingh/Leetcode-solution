// Last updated: 1/25/2026, 10:00:31 PM
1class Solution {
2public:
3   int singleNonDuplicate(vector<int>& arr) {
4        int low = 0, high = arr.size() - 1;
5        
6        while (low < high) {
7            int mid = low + (high - low) / 2;
8            
9            // Ensure mid is even, so we compare pairs correctly
10            if (mid % 2 == 1) {
11                mid--;
12            }
13            
14            // If the next element is the same, move to the right half
15            if (arr[mid] == arr[mid + 1]) {
16                low = mid + 2;
17            } else {
18                high = mid;
19            }
20        }
21        
22        return arr[high]; 
23   }
24};