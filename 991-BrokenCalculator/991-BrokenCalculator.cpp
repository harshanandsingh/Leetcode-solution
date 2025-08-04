// Last updated: 8/4/2025, 5:28:44 PM
class Solution {
public:
    int brokenCalc(int s, int t) {
        // reverse start form target reach till startvalue 
        // if even and > start value -> devide 
        // if odd and < start value -> +1 

        int c=0;
        while(t != s){
            if(t%2 || t<s) t+=1;
            else if(t%2==0 || t>s) t/=2;
            c++;
        }
        return c;
    }
};