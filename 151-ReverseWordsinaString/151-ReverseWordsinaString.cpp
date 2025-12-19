// Last updated: 12/19/2025, 9:26:50 AM
1class Solution {
2public:
3    string reverseWords(string s) {
4        string f = "";
5        s=s+" ";
6        //vector<string>v;
7        int n=s.size();
8        string s1="";
9        for(int i=0;i<n;i++){
10            if(s[i]!=' '){
11                s1+=s[i];
12            }
13            else{
14                if(f=="") f = s1; 
15                else if(s1!="") f = s1+" "+f;
16                s1="";
17            }
18        }
19        //for(int i=0;i<v.size();i++) cout<<v[i]<<endl;
20        // s1="";
21        // for(int i=v.size()-1;i>0;i--) s1= s1+v[i]+" ";
22        // s1=s1+v[0];
23        return f;
24    }
25};