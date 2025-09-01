// Last updated: 9/1/2025, 10:58:02 PM
class Solution {
public:
    bool check(vector<int>& a) {

        // find number of times arr[i] > arr[i+1]
        int count = 0;
        int n = a.size();
        for(int i=1;i<n;i++){
            if(a[i]<a[i-1]) count++;
        }
        if( (a[0]<a[n-1] && count>0 ) || (count>1)) return false;
        return true; 
        /*int p=nums.size();
        int ii=-1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                p=i;
                ii=p;
                //cout<<nums[p]<<endl;
                break;
            }
        }
        if (ii==-1){
            return true;
        }
        /*
        if(p + 1 < nums.size() && nums[p+1]>nums[0]) return false;
        for(int i=p+1;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1] || nums[i+1]>nums[0]){
                //cout<<nums[i]<<endl;
                return false;
            }
        }
        int n=nums.size();
        for(int j=0;j<n-1;j++){
            ii++;    
            if(nums[ii%n]>nums[(ii+1)%n]){
                //cout<<nums[i]<<endl;
                return false;
            }
        }
        return true;
        */ 


       
    }
};