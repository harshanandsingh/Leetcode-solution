// Last updated: 5/15/2026, 3:26:21 AM
1class Solution {
2public:
3    bool isGood(vector<int>& nums) {
4        int n = nums.size();
5        if(n==1) return false;
6        sort(nums.begin(),nums.end());
7        for(int i=1;i<n-1;i++) if(nums[i-1]!=i) return false;
8        if((nums[n-2] != nums[n-1]) || (nums[n-1]!=n-1)) return false;
9        return true;
10        // vector<int>v(n+1);
11        // for(auto x:nums){
12        //     v[x]++;
13        // }
14        // for(int i=1;i<n-1;i++){
15        //     if(v[i] != 1) return false;
16        //     cout<<i<<" "<<v[i]<<endl;
17        // }
18        // if(v[n-1]!=2) return false;
19        // return true;
20
21    }
22};