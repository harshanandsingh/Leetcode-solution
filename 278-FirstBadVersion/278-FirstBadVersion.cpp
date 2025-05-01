// Last updated: 5/1/2025, 5:29:08 PM
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start=1,end=n;
        while(start<=end)
        {
            int mid=(end-start)/2+start;
            if(isBadVersion(mid))
                end=mid-1;
            else 
                start=mid+1;
        }
        return start;
    }
};