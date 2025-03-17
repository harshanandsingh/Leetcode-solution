class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // int n = nums.size();
        // int max_len =0;
        // for(int i=0;i<n;i++){
        //     int a = k,j;
        //     for(j=i;j<n;j++){
        //         if(nums[j]==1 || (nums[j]==0 && a>0) ){
        //             if(!nums[j]) a--;
        //         }
        //         else{
        //             max_len = max(max_len,j-i);
        //             break;
        //         }
        //     }
        //     max_len = max(max_len,j-i);
        // }

        // return max_len;

        int i = 0, j = 0, max_len = 0, zero_count = 0;
        int n = nums.size();

        while (j < n) {
            if (nums[j] == 0) zero_count++;

            while (zero_count > k) { // If zeroes exceed `k`, shrink window
                if (nums[i] == 0) zero_count--;
                i++;
            }

            max_len = max(max_len, j - i + 1);
            j++;
        }
        return max_len;
    }
};