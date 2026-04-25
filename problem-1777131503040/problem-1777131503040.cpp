// Last updated: 4/25/2026, 9:08:23 PM
1class Solution {
2public:
3    long long counteven(int l,int r,long long x, vector<int>& nums,vector<int>& even_prefix){
4        long long total_even = x/2;
5        auto it = upper_bound(nums.begin()+l, nums.begin() + r+1 , x);
6        int right_idx = distance(nums.begin(),it) -1;
7        long long remove_even = 0;
8        if(right_idx >= l){
9            remove_even = even_prefix[right_idx] - (l>0 ? even_prefix[l-1] : 0);
10        }
11        return total_even - remove_even;
12    }
13    vector<int> kthRemainingInteger(vector<int>& nums, vector<vector<int>>& queries) {
14        int n = nums.size();
15        vector<int> even_prefix(n,0);
16        for(int i = 0;i<n;i++){
17            even_prefix[i] = (i>0 ? even_prefix[i-1] : 0) + (nums[i] % 2 == 0 ? 1 : 0);
18        }
19        vector<int >result;
20        for(auto &q : queries){
21            int l = q[0] , r = q[1] , k = q[2];
22            long long low = 2, high = 1e15;
23            long long ans = high;
24            while(low <=high){
25                long long mid = low + (high - low)/2;
26                // if(mid %2 != 0) mid--;
27                if(counteven(l,r,mid,nums,even_prefix) >= k){
28                    ans = mid;
29                    high = mid - 1;
30                }else{
31                    low = mid + 1;
32                }
33            }
34            if(ans %2 != 0) ans--;
35            if(counteven(l,r,ans,nums,even_prefix) < k) ans+= 2;
36            result.push_back((int)ans);
37        }
38        return result;
39    }
40};