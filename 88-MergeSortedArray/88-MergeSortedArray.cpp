// Last updated: 5/4/2025, 7:05:16 PM
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=0;
        while(i>=0 && j<n){
            if(nums1[i]>nums2[j]) swap(nums1[i--],nums2[j++]);
            else break;
        }
        sort(nums1.begin(),nums1.begin()+m);
        sort(nums2.begin(),nums2.end());
        for(int i=m;i<n+m;i++) nums1[i]=nums2[i-m];
    }
};