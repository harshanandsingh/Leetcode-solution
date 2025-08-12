// Last updated: 8/12/2025, 11:36:19 AM
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // brute force 
        int n = arr.size();
        int i = 0,j=1;
        while(i<n){
            if(arr[i] != j){
                k--;
                j++;
            }
            else{
                j++;
                i++;
            }

            if(k==0) return j-1;
        }

        return j+k-1;
    }
};