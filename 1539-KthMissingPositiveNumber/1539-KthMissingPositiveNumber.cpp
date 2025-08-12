// Last updated: 8/12/2025, 12:07:29 PM
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // lets optimize this 
        // ex           2 3 4 7 11 
        // missing ->   1 1 1 3 6  i -> index , arr[i] - i - 1 = number of missing till that position 

        // so we have to find the index < k missing 

        int low = 0 , high = arr.size()-1;
        while(low <= high){
            int mid = low + (high - low)/2;
            int missing = arr[mid]-mid-1; // this will give the total number of missing till this point 
            if(missing >= k ) high = mid-1;
            else if(missing < k) low = mid+1;
        }
        if(high < 0) return 0+k;
        return arr[high] + (k - (arr[high]-high-1));

        // brute force 
        // int n = arr.size();
        // int i = 0,j=1;
        // while(i<n){
        //     if(arr[i] != j){
        //         k--;
        //         j++;
        //     }
        //     else{
        //         j++;
        //         i++;
        //     }

        //     if(k==0) return j-1;
        // }

        // return j+k-1;
    }
};