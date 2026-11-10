// Last updated: 11/10/2026, 10:39:33 PM
1class Solution {
2public:
3    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
4        sort(nums1.begin(),nums1.end());
5        sort(nums2.begin(),nums2.end());
6        int i=0,j=0;
7        int n = nums1.size();
8        int m = nums2.size();
9        vector<int>ans;
10        while(i<n && j<m){
11            if(nums1[i] < nums2[j]) i++;
12            else if(nums1[i] > nums2[j]) j++;
13            else{
14                ans.push_back(nums1[i]);
15                i++;
16                j++;
17            }
18        }
19        return ans;
20    }
21};