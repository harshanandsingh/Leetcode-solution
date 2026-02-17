// Last updated: 2/17/2026, 12:26:15 PM
1class Solution {
2public:
3    long long countSubarrays(vector<int>& nums, int mink, int maxk) {
4        // simple approch -> 
5        long long ans = 0ll;
6        int last_min = -1, last_max = -1, last_invalid = -1, valid = -1;
7        int n = nums.size();
8        for(int i=0;i<n;i++){
9            if(nums[i]<mink || nums[i]>maxk) last_invalid = i;
10
11            if(nums[i]==mink) last_min = i;
12            if(nums[i]==maxk) last_max = i;
13
14            valid = min(last_min,last_max);
15            if(valid > last_invalid) ans += valid - last_invalid;
16            cout<<ans<<" ";
17
18        }
19        return ans;
20
21        // stoopid approch 
22        // long long ans = 0ll; 
23
24        // int end_idx = -1 , start_idx = -1;
25        // bool contain_min = false , contain_max = true;
26        // int n = nums.size();
27        // for(int i=0;i<n;i++){
28        //     if(start_idx == -1 && nums[i]>=mink) start_idx = i; // we only have to set this once 
29        //     if(start_idx == -1 && nums[i]<= maxk) end_idx = i; // we only have to set this once 
30        //     if(nums[i] < mink){
31        //         start_idx = -1;
32        //         contain_min = false;
33        //     }
34        //     if(nums[i] > maxk){
35        //         end_idx = -1;
36        //         contain_max = false;
37        //     }
38        //     if(nums[i]==mink) contain_min = true;
39        //     if(nums[i]==maxk) contain_max = true;
40
41        //     if(start_idx != -1 && end_idx != -1 && contain_min && contain_max) ans+= abs(start_idx-end_idx)+1;
42
43        // }
44        // return ans;
45    }
46};