class Solution {
public:
    // void merge(int l, int mid, int m, vector<int>& nums) {
    //     int i = l, j = mid + 1, k = l;
    //     vector<int> v(m - l + 1);  // Allocate based on the range size
    //     int index = 0;
        
    //     while (i <= mid && j <= m) {
    //         if (nums[i] < nums[j]) v[index++] = nums[i++];
    //         else v[index++] = nums[j++];
    //     }
    //     while (i <= mid) v[index++] = nums[i++];
    //     while (j <= m) v[index++] = nums[j++];
        
    //     // Copy the sorted elements back to the original array
    //     for (int i = 0; i < index; ++i) {
    //         nums[l + i] = v[i];
    //     }
    // }

    // void mergeSort(int l, int m, vector<int>& nums) {
    //     if (l < m) {  // Correct the base condition
    //         int mid = l + (m - l) / 2;
    //         mergeSort(l, mid, nums);
    //         mergeSort(mid + 1, m, nums);
    //         merge(l, mid, m, nums);
    //     }
    // }

    void sortColors(vector<int>& nums) {
    //     int l = 0, m = nums.size() - 1;
    //     mergeSort(l, m, nums);
        int n = nums.size();
        int i=0,j=0,k=n-1;
        while(j<=k){
            if(nums[j]==2) swap(nums[j],nums[k--]);
            else if(nums[j]==0) swap(nums[j++],nums[i++]);
            else j++;
        }
    }
};
