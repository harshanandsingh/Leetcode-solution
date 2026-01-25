// Last updated: 1/25/2026, 10:22:33 PM
1class Solution {
2public:
3    int Peak(vector<int>& arr,int low , int high){
4        if(low > high) return -1;
5        int mid = low + ( high - low ) / 2 ;
6        if( ( mid == 0 || arr[mid]>arr[mid-1] ) && ( mid == arr.size() -1 || arr[mid] > arr[mid+1] ) ) return mid;
7        else if(mid !=0 && arr[mid-1]>=arr[mid]) high = mid-1;
8        else if(mid != arr.size()-1 && arr[mid+1]>=arr[mid]) low = mid+1;
9        return Peak(arr,low,high);
10    }
11    int findPeakElement(vector<int>& nums) {
12        // we can solve this problem in o(n) time using linerar search 
13        // but its mentioned that we have to solve the problem in o(log n)
14
15        // main thing to notice is that -> we have to search in an array -> linear is not passible -> so only option is binary 
16        // but binary only work on sorted array -> 
17        
18        // now lets think carefully -> 
19        // peek element -> arr[left] < arr[mid] > arr[right] 
20        // given ex 3 1 2 , is there any peek element -> yes 3 , but why ? 
21        // 3 > 1 and on the left its nothing so yes its a peek element 
22
23        // so do a binary search -> if( mid == 0 || arr[mid]>arr[left] ) && ( mid == n-1 || arr[mid] > arr[right] ) 
24        // if not which ever is more left or right that might be a peak element 
25        return Peak(nums,0,nums.size()-1);
26        
27    }
28};