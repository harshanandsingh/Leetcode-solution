// Last updated: 8/21/2025, 7:16:58 AM
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // 1. put all element in the same array and do sorting -> o(nlgon(n)) time 
        // 2. use extra space and do murge sort -> o(n) but with o(n) space
        // 3. better to start form the back -> 
        int i=m-1; // first array largest element 
        int j=n-1; // second element largest element 
        int k = n+m-1; // start filling from the end 

        while(i>=0 && j>=0){
            if(nums1[i]>=nums2[j]){
                nums1[k]=nums1[i];
                k--;
                i--;
            }else{
                nums1[k]=nums2[j];
                k--;
                j--;
            }
        }
        while(j>=0){
            nums1[k--]=nums2[j--];
        }
    }
};