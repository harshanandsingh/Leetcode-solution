// Last updated: 8/8/2025, 4:01:32 PM
class Solution {
public:
    vector<int> pivotArray(vector<int>& arr, int p) {
        vector<int>e,g,l;
        int n = arr.size();
        int j=0;
        while(j<n){
            if(arr[j]<p) l.push_back(arr[j]);
            else if(arr[j] > p) g.push_back(arr[j]);
            else e.push_back(arr[j]);
            j++;
        }

        vector<int> result;
        result.insert(result.end(),l.begin(),l.end());
        result.insert(result.end(),e.begin(),e.end());
        result.insert(result.end(),g.begin(),g.end());
        return result;


        // in this way we are not able to preserve the order 
        // int n = arr.size();
        // int i=0,j=0,k=n-1;
        // while(j<=k){
        //     if(arr[j]<p) swap(arr[i++],arr[j++]);
        //     else if(arr[j] > p) swap(arr[j],arr[k--]);
        //     else{
        //         j++;
        //     }
        // }
        // reverse(arr.begin()+j,arr.end());
        // return arr;
    }
};