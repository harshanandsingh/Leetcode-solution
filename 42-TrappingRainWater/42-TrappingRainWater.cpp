// Last updated: 1/29/2026, 4:00:04 PM
1class Solution {
2public:
3    int trap(vector<int>& height) {
4        int n = height.size();
5        int i = 0 , j = n-1;
6        int left_min = height[i];
7        int right_min = height[j];
8        int ans = 0;
9        while(i<=j){
10            if(left_min <= right_min){
11                if(left_min >= height[i]) ans+=left_min - height[i];
12                else left_min = height[i];
13                i++;
14            }else{
15                if(right_min >= height[j]) ans+=right_min - height[j];
16                else right_min = height[j];
17                j--;
18            }
19        }
20        return ans;
21    }
22};