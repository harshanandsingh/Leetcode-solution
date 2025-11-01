// Last updated: 11/1/2025, 12:05:15 PM
class Solution {
public:

    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int n = arr.size();
        vector<int>pre(n,0);
        pre[0]=arr[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+arr[i];
        }

        int ans = 0;

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j+=2){
                if(i!=0) ans+=pre[j]-pre[i-1];
                else ans+=pre[j];
            }
        }
        return ans;
        


        // failed to attempt 
        // int n = arr.size();
        // vector<int>pre(n,0);
        // for(int i=0;i<n;i+=2){
        //     int j = 0;
        //     while(j<i){
        //         pre[j]+=j+1;
        //         j++;
        //     }
        //     int k = i;
        //     while(k<n-i){
        //         pre[k]+=i;
        //         k++;
        //     }
        //     int m = n-1,cou=1; 
        //     while(m>i){
        //         pre[m]+=cou;
        //         cou++;
        //         m--;
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     cout<<pre[i]<<endl;
        // }
        // int pro = 1;
        // for(int i=0;i<n;i++){
        //     pro*=pre[i]*arr[i];
        // }
        // return pro;
    }
};