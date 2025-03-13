class Solution {
public:
    int removeElement(vector<int>& v, int val) {
        // v.erase(remove(v.begin(), v.end(), val), v.end());
        // return v.size();

        int i=0,j=0;
        int n=v.size();
        while(j<n){
            if(v[j]!=val) swap(v[i++],v[j]);
            j++;
        }
        return i;
    }
};