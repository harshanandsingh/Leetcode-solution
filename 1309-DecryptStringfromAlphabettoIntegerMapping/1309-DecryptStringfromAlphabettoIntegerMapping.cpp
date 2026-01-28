// Last updated: 1/28/2026, 6:39:12 AM
1class Solution {
2public:
3    string freqAlphabets(string s) {
4        unordered_map<string,char>m;
5        for(int i=0;i<26;i++){
6            string a = to_string(i+1);
7            m[a]=char('a'+i);
8        }
9        
10        string ans ="";
11        int j=0,n=s.size();
12        while(j<n){
13            if((j+2 < n && s[j+2]!='#') || (j+2 >= n)) ans += m[string(1, s[j])];
14            else if(j+2< n && s[j+2]=='#'){
15                string a = s.substr(j,2);
16                ans+=m[a];
17                j+=2;
18            } 
19            j++;
20        }
21        return ans;
22    }
23};
24
25
26// if(c!='#'){
27//                 ans+=string(1,m[a]);
28//                 ans+=string(1,m[b]);
29//                 ans+=string(1,m[c]);
30//             }else{
31//                 string d = a+b;
32//                 ans+=m[d];
33//             }