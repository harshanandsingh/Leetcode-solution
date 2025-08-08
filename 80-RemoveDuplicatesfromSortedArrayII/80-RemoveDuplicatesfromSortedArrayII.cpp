// Last updated: 8/8/2025, 12:36:55 PM
class Solution {
public:
    int removeDuplicates(vector<int>& arr) {

        int n = arr.size();
        int j = 0 , i = 0;
        while(j<n){

            int p = arr[j] , count = 0;
            while(j<n && p == arr[j]){
                j++; count++;
            }
            int a = i + count ;
            int b = i + 2;
            while(i<a && i<b){
                arr[i++] = p;
            }
        }
        return i;
       
        //         int count = 0;
        // for(int i = 0; i < nums.size(); i++) {
        //     if(nums.size()<2){
        //         return 1;
        //     }
        //     if(i < nums.size() - 2 && nums[i] == nums[i+2]) {
        //         continue;
        //     }
        //     nums[count] = nums[i];
        //     count++;
            
        // }
        // return count;
    }
};