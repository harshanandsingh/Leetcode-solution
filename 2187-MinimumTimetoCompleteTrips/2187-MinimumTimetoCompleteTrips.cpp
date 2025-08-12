// Last updated: 8/12/2025, 4:26:33 PM
class Solution {
public:
    bool posible(vector<int>& time, int t,long long k){
        long long total = 0;
        for(int i = 0;i<time.size();i++){
            
            total += k / time[i];
            if(total >= t) return true;

        }
        return total >= t;
    }
    long long minimumTime(vector<int>& time, int t) {

        long long int low = 1;
        long long int high = 1LL * *min_element(time.begin(), time.end()) * t;
        long long ans = high;
        while(low<=high){
            long long mid = low + (high - low)/2;
            if(posible(time,t,mid)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;

        // brute force approch -> check at what time we can take which bus and if you be able to take that bus 
        // retduce the trip count 
        // int n = time.size();
        // bool flag = false;
        // long long ans = LLONG_MAX;
        // for(long long i = 1;i<LLONG_MAX;i++){
        //     for(long long j=0;j<n;j++){
        //         if(i % time[j] == 0){
        //             t--;
        //             if(t==0){
        //                 flag = true;
        //                 break;
        //             }
        //         }
        //     }
        //     if(flag){
        //         ans = i;
        //         break;
        //     }
        // }
        // return ans;
    }
};