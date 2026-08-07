// Last updated: 8/7/2026, 6:17:55 PM
1class Solution {
2public:
3    bool solve(vector<int>& nums, int op,int mid){
4        int count = 0;
5        for(auto x:nums){
6            count+= x/mid;
7            if(x%mid==0) count--;
8            //if(x%mid!=0) count++;
9
10            if(count > op) return false;
11        }
12        return count<=op;
13    }
14    int minimumSize(vector<int>& nums, int op) {
15        // binery search with answer -> in this case find the aswer 
16        // find minimum form maximum.. 
17        int low = 1;
18        int high = *max_element(nums.begin(),nums.end());
19        int ans = high;
20
21        while(low<=high){
22            int mid = low + (high - low)/2;
23            if(solve(nums,op,mid)){
24                ans = mid;
25                high = mid-1; 
26            }else{
27                low = mid+1;
28            }
29        }
30        return ans;
31    }
32};