// Last updated: 8/18/2025, 3:31:31 PM
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int largest= 0;
        int slargest =0;
        int smallest =INT_MAX;
        int ssmallest =INT_MAX;
        for(int i=0; i<nums.size();i++){
            if(largest < nums[i]){
                slargest = largest;
                largest = nums[i];
            }
            else if(slargest < nums[i]){
                slargest = nums[i];
            }
            if(nums[i] < smallest){
                ssmallest = smallest;
                smallest = nums[i];
            }
           else if(ssmallest > nums[i]){
                ssmallest = nums[i];
            }
            
        }
        return (largest*slargest) - (smallest *ssmallest); 
    }
};