// Last updated: 5/14/2026, 12:12:49 AM
1class Solution {
2public:
3    int minMoves(vector<int>& nums, int limit) {
4        int n = nums.size();
5        // diff[i] stores the change in moves needed for a target sum of i
6        // Range of sums is [2, 2 * limit], so size 2 * limit + 2 is safe
7        vector<int> diff(2 * limit + 2, 0);
8
9        for (int i = 0; i < n / 2; ++i) {
10            int a = nums[i];
11            int b = nums[n - 1 - i];
12
13            // Default: Assume 2 moves for every possible target sum
14            // We apply +2 to the entire range [2, 2 * limit]
15            diff[2] += 2;
16            diff[2 * limit + 1] -= 2;
17
18            // Range where only 1 move is needed: [1 + min(a, b), limit + max(a, b)]
19            // We reduce the cost from 2 to 1 in this range
20            int one_move_min = 1 + min(a, b);
21            int one_move_max = limit + max(a, b);
22            diff[one_move_min] -= 1;
23            diff[one_move_max + 1] += 1;
24
25            // Range where 0 moves are needed: exactly a + b
26            // We reduce the cost from 1 to 0 at this specific point
27            int zero_move_sum = a + b;
28            diff[zero_move_sum] -= 1;
29            diff[zero_move_sum + 1] += 1;
30        }
31
32        int min_moves = n; // Max possible moves is n (2 per pair)
33        int current_moves = 0;
34        
35        // Sweep through the difference array to find the minimum prefix sum
36        for (int i = 2; i <= 2 * limit; ++i) {
37            current_moves += diff[i];
38            min_moves = min(min_moves, current_moves);
39        }
40
41        return min_moves;
42    }
43};
44        // int n = nums.size();
45        // unordered_map<int,int>m;
46        // for(int i=0;i<n/2;i++){
47        //     int sum =nums[i]+nums[n-i-1]; 
48        //     if( sum <= 2*limit){
49        //         m[sum]++;
50        //     }
51        // }
52        // int max_a = 0;
53        // int sum = 0;
54        // for(auto [x,y]:m){
55        //     if(max_a < y){
56        //         max_a = y;
57        //         sum = x;
58        //     }
59            
60        // }
61        // int count = 0;
62        // for(int i=0;i<n/2;i++){
63        //     int total = nums[i]+nums[n-i-1]; 
64        //     if(total != sum){
65        //         if(limit + max(nums[i],nums[n-i-1]) >= sum) count++;
66        //         else count+= 2;
67        //     }
68        // }
69        // return count;
70 