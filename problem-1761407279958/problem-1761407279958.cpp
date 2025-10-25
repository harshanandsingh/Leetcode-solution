// Last updated: 10/25/2025, 9:17:59 PM
class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        // my number can be between -> 9 8 7 
        vector<int>v={9,8,7,6,5,4,3,2,1,0};
        string s="";
        int i=0;
        int new_sum = sum;
        while(i<num){
            for(auto x:v){
                while(i<num && sum>=x){
                    sum-=x;
                    s+=to_string(x);
                    i++;
                }
            }
        }
        int checkSum = 0;
        for (char c : s) checkSum += (c - '0');
        //cout<<checkSum<<endl;
        //cout<<s<<endl;
        if(checkSum == new_sum) return s;
        return "";
    }
};