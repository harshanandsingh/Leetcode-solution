// Last updated: 7/19/2025, 6:46:52 PM
class Solution {
public:
    int maxProfit(vector<int>& a) {
        // int n=a.size();
        // int min_ = a[0] , max_ = 0;
        // for(int i=1;i<n;i++){
        //     if(a[i]-min_<0) min_=a[i];
        //     else if(a[i]-min_>max_) max_=a[i]-min_;
        // }
        // return max_;

        int n = a.size();
        int c_min = a[0];
        int max_p = 0;
        for(int i=1;i<n;i++){
            if(a[i]<c_min) c_min=a[i];
            else max_p = max(max_p , a[i]-c_min);
        }
        return max_p;
    }
};