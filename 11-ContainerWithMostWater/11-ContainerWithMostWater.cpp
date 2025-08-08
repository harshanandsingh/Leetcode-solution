// Last updated: 8/8/2025, 4:12:31 PM
class Solution {
public:
    int maxArea(vector<int>& a) {
        int i=0,j=a.size()-1;
        int cap = 0 , max_cap = 0;
        while(i<j){
            cap = (j-i)*min(a[i],a[j]);
            max_cap = max(cap,max_cap);
            if(a[i]<a[j]) i++;
            else if(a[i]>a[j]) j--;
            else{
                j--;
            }
        }
        return max_cap;
    }
};