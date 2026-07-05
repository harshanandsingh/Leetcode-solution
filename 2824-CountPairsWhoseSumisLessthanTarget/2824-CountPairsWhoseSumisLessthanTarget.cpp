// Last updated: 7/5/2026, 9:20:10 AM
1class Solution {
2public:
3    int countPairs(vector<int>& nums, int target) {
4        int count = 0;
5        int n = nums.size();
6
7        for(int i=0;i<n-1;i++){
8            for(int j=i+1;j<n;j++){
9                if(nums[i]+nums[j] < target){
10                    cout<<nums[i]<<" "<<nums[j]<<endl;
11                    count++;
12                }
13            }
14        
15        }
16        return count;
17    
18    }
19};