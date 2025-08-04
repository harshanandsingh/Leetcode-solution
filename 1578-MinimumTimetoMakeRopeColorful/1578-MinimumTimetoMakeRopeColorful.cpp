// Last updated: 8/4/2025, 6:06:55 PM
class Solution {
public:
    int minCost(string c, vector<int>& t) {
        // what i got an idea that -> find two consecutive -> remove the lowest time taking one 
        // now there might be a case like ->  a a a three consequtive -> time 2 1 3 -> so you removed 1 
        // now 2 3 are still there with same color -> agin have to remove -> but you cant check lieck like arr[i] == arr[i-1]
        // as arr[i-1] is no more , if you physicaly delete in given array -> it will take lots amount of time 

        // so just sote the last visited index index 
        int n = c.size();
        int l = 0; // last index visited 
        int j=1;
        int min = 0;
        while(j<n){
            if(c[j]==c[l]){
                if(t[j]>=t[l]){
                    min+=t[l];
                    l = j;
                    j++;
                }
                else{
                    min+=t[j];
                    j++;
                }
            }
            else{
                l=j;
                j++;
            }
        }
        return min;
    }
};