// Last updated: 9/30/2025, 8:12:54 PM
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        // this problem is same as maximum numnber of meation we can attend 
        int n = intervals.size();
        sort(intervals.begin(),intervals.end(),[](auto &a,auto &b){
            return a[1]<b[1];
        });

        int count = 1;
        int end_time = intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0]>= end_time){
                count++;
                end_time = intervals[i][1];
            }
        }
        return n - count;


        // this is not a maximum overlaping problem 
        // vector<pair<int,int>>find;
        // int n = intervals.size();

        // for(int i=0;i<n;i++){
        //     find.push_back({intervals[i][0],1});
        //     find.push_back({intervals[i][1],-1});
        // }
        // sort(find.begin(),find.end());

        // int count = 0;
        // int max_count = 0;
        // for(auto [a,b]:find){
        //     count+=b;
        //     max_count = max(max_count , count);
        // }
        // return max_count-1;
    }
};