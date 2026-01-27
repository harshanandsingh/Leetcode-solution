// Last updated: 1/27/2026, 9:46:04 PM
1class Solution {
2public:
3    bool vov(char ch){
4        string s = "aeiouAEIOU";
5        if(s.find(ch)!= string::npos) return true;
6        return false;
7    }
8    string reverseVowels(string s) {
9        int n = s.size();
10        int i=0,j=n-1;
11        while(i<j){
12            while(i<j && !vov(s[i])) i++;
13            while(i<j && !vov(s[j])) j--;
14            if(i<j) swap(s[i],s[j]);
15            j--;
16            i++; 
17        }
18        return s;
19    }
20    string reverseVowels1(string s) {
21        int n=s.length();
22        int i=0,j=n-1;
23        while(i<=j){
24            int k;
25            for( k=i;k<n;k++){
26                if(s[k]=='a'||s[k]=='e'||s[k]=='i'||s[k]=='o'||s[k]=='u'||s[k]=='A'||s[k]=='E'||s[k]=='I'||s[k]=='O'||s[k]=='U'){
27                    
28                   // cout<<"i "<<i<<endl;
29                    break;
30                }
31            }
32            i=k;
33            for( k=j;k>=0;k--){
34                if(s[k]=='a'||s[k]=='e'||s[k]=='i'||s[k]=='o'||s[k]=='u'||s[k]=='A'||s[k]=='E'||s[k]=='I'||s[k]=='O'||s[k]=='U'){
35                   // cout<<"j "<<j<<endl;
36                    break;
37                }
38            }
39            j=k;
40            if(i<=j) swap(s[i++],s[j--]);
41            else return s;
42        }
43        return s;
44    }
45};