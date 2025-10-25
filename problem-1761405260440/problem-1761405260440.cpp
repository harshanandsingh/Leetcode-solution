// Last updated: 10/25/2025, 8:44:20 PM
class Solution {
public:
    string lexSmallest(string s) {
        int n=s.size();
        int i=0;
        string min_str = s;
        while(i<n){
            string st = s;
            reverse(st.begin(),st.begin()+i);
            min_str = min(min_str,st);
            st = s;
            reverse(st.begin()+i,st.end());
            min_str = min(min_str,st);
            i++;  
        }
        return min_str;
        // int n = s.size();
        // char min_char = s[0];
        // // find min char 
        // for(int i=1;i<n;i++){
        //     if(s[i]<min_char) min_char = s[i];
        // }
        // // find all the index of min char 
        // vector<int>v;
        // for(int i=0;i<n;i++){
        //     if(s[i]==min_char) v.push_back(i);
        // }
        // if((int)v.size()==1){
        //     int k = v[0];
        //     if()
        // }
        
        // vector<string>vac;
        // vac.push_back(s);
        // for(auto x:v){
        //     string st = s;
        //     string st1 = s;
        //     reverse(st.begin(),st.begin()+x+1);
        //     vac.push_back(st);
        //     reverse(st1.begin()+x,st1.end());
        //     vac.push_back(st1);
        // }
        // sort(vac.begin(),vac.end());
        // return vac[0];  
    }
};