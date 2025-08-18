// Last updated: 8/18/2025, 3:41:39 PM
class Solution {
public:
    bool isCircularSentence(string sen) {
        // to save time we will see -> sen[0] == sen[n-1] , if same then only see entire array 
        
        int n = sen.size();
        if(sen[0]!=sen[n-1]) return false;

        for(int i=1;i<n-1;i++){
            if(sen[i]==' ' && sen[i-1]!=sen[i+1]){
                return false;
            }
        }
        return true;

    }
};