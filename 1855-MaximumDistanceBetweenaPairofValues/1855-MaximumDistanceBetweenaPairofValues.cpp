// Last updated: 4/30/2025, 7:58:04 PM
class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size() , m = nums2.size();

        int i=0,j=0;
        int max_ = 0;
        while(i<n && j<m){
            if( nums1[i]<=nums2[j]){ //i<= j &&
                //cout<<i<<" "<<j<<endl;
                
                max_ = max(j-i,max_);
                j++;
                
            }
            else{
                i++;
                //j=i;
            }
        }
        return max_;
    }
};