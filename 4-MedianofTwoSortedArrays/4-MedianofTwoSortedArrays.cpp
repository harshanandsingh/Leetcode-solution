// Last updated: 12/27/2025, 7:53:44 PM
1class Solution {
2public:
3    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
4        if(nums1.size()>nums2.size()) return findMedianSortedArrays(nums2,nums1); // swap nums1 and nums 2
5
6        int n = nums1.size(), m = nums2.size();
7        int low = 0, high = n; // low = 0 as you don't take any element form array 1 and all elemnt form array 2 
8        double ans = 0;
9        while(low<=high){
10            int i = low + (high - low)/2;
11            int j = (n+m+1)/2 - i;
12            // int left1 = nums1[i-1];
13            // int left2 = nums2[j-1];
14            int left1  = (i == 0) ? INT_MIN : nums1[i-1];
15            int left2  = (j == 0) ? INT_MIN : nums2[j-1];
16            int right1 = (i==n) ? INT_MAX:nums1[i];
17            int right2 = (j==m) ? INT_MAX :nums2[j];
18
19            if(left1<=right2 && left2<=right1){
20                ans = max(left1 , left2);
21                if((m+n) % 2 ==0){
22                    ans = ( ans + min(right1,right2))/2;
23                }
24                break;
25            }else if(left1>right2){
26                high = i-1;
27            }else{
28                low = i+1;
29            }
30        }
31        return ans;
32    }
33};