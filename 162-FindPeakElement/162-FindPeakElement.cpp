// Last updated: 8/9/2025, 11:38:04 AM
class Solution {
public:
    int Peak(vector<int>& arr,int low , int high){
        if(low > high) return -1;
        int mid = low + ( high - low ) / 2 ;
        if( ( mid == 0 || arr[mid]>arr[mid-1] ) && ( mid == arr.size() -1 || arr[mid] > arr[mid+1] ) ) return mid;
        else if(mid !=0 && arr[mid-1]>arr[mid]) high = mid-1;
        else if(mid != arr.size()-1 && arr[mid+1]>arr[mid]) low = mid+1;
        return Peak(arr,low,high);
    }
    int findPeakElement(vector<int>& nums) {
        // we can solve this problem in o(n) time using linerar search 
        // but its mentioned that we have to solve the problem in o(log n)

        // main thing to notice is that -> we have to search in an array -> linear is not passible -> so only option is binary 
        // but binary only work on sorted array -> 
        
        // now lets think carefully -> 
        // peek element -> arr[left] < arr[mid] > arr[right] 
        // given ex 3 1 2 , is there any peek element -> yes 3 , but why ? 
        // 3 > 1 and on the left its nothing so yes its a peek element 

        // so do a binary search -> if( mid == 0 || arr[mid]>arr[left] ) && ( mid == n-1 || arr[mid] > arr[right] ) 
        // if not which ever is more left or right that might be a peak element 
        return Peak(nums,0,nums.size()-1);
        
    }
};