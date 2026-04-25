// Last updated: 4/25/2026, 8:19:21 PM
1#define lli long long int
2class Solution {
3public:
4    int compareBitonicSums(vector<int>& nums) {
5
6        int n = nums.size();
7
8        int p_idx = 0;
9        while(p_idx < n-1 && nums[p_idx] < nums[p_idx+1]) p_idx++;
10        
11        // int i = 0;
12        // for(i=0;i<n-1;i++){
13        //     if(nums[i]>nums[i+1]) break;
14        // }
15        
16        lli asc_sum = 0;
17        for(int i = 0;i<=p_idx;i++) asc_sum+=nums[i];
18        lli dsc_sum = 0;
19        for(int i=p_idx;i<n;i++) dsc_sum+=nums[i];
20
21        if(asc_sum > dsc_sum) return 0;
22        else if(asc_sum < dsc_sum) return 1;
23        return -1;
24        
25    }
26};