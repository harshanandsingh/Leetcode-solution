// Last updated: 9/1/2025, 11:05:07 PM
class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        // int i=0;
        // for(int j=0;j<v.size();j++){
        //     if(v[i]!=v[j]) v[++i]=v[j];
        // }
        // return i+1;

        int n = v.size();
        int i=0,j=0;
        while(j<n){
            int p = v[j];
            while(j<n && v[j]==p) j++;
            v[i++]=v[j-1];
        }
        return i;
    }
};

//v.erase(v.begin()+i);