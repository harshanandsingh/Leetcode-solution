// Last updated: 8/11/2025, 6:19:19 PM
class Solution {
public:
    bool eat(int k,vector<int>& piles,int h){
        long long sum = 0;
        for(auto x:piles){
            sum += ceil(double(x)/k);
        }
        return sum <= h ;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        // we have to find the min k -> so that we can eat all the banana in h hours 
        
        // now just think of the range -> it range form 1 to max of input arry 
        
        // as we can eat only ith index only in one hour 

        int n = piles.size();

        auto it = max_element(piles.begin(),piles.end());

        // now we have to do binery serch in that resion to find what is the min k value 
        int low = 1 , high = *it;
        int ans = 0;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(eat(mid,piles,h)){
                ans = mid ;
                high = mid -1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
};