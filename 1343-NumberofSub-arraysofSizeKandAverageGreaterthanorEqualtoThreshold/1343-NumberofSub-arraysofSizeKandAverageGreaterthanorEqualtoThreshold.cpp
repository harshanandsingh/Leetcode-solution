// Last updated: 7/26/2025, 7:07:32 PM
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int t) {
        int n = arr.size();
        int i=0,j=0;
        int sum = 0;
        int count=0;
        while(j<n){
            
            sum+=arr[j];
            
            if(j-i+1==k){
                if(sum/k >=t) count++;
                sum-=arr[i++];
            }

            j++;
            
        }
        return count;
    }
};