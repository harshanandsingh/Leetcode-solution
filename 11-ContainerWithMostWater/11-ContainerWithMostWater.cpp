// Last updated: 9/24/2025, 11:29:00 PM
class Solution {
public:
    int maxArea(vector<int>& a) {
        int i=0,j=a.size()-1;
        int cap = 0 , max_cap = 0;
        while(i<j){
            int dis = j-i;
            if(a[i]<a[j]){
                cap = dis * a[i];
                i++;
            }
            else{
                cap = dis * a[j];
                j--;
            }
         
            max_cap = max(cap,max_cap);
        }
        return max_cap;
    }
};