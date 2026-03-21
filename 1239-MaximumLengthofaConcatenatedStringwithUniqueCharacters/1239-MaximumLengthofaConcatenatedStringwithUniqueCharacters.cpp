// Last updated: 3/22/2026, 1:14:33 AM
1class Solution {
2public:
3    bool same(string s1 , string s2){
4
5        vector<int>v(26,0);
6        for(auto x:s1){
7            if(v[x-'a']>0) return true;
8            v[x-'a']++;
9        }
10        for(auto x:s2){
11            if(v[x-'a']>0) return true;
12            v[x-'a']++;
13        }
14        return false;
15
16    }
17    int solve(int index,int n,vector<string>& arr,string temp){
18
19        if(index >= n) return temp.size(); // base case -> no more index left out so simply return temp size
20
21        int excape = 0;
22        int include = 0;
23
24        if(same(arr[index],temp)){ // in this we only have one optoin -> we have to excape this 
25            excape = solve(index+1,n,arr,temp);
26        }else{// in this we have option to either include or exclude it 
27            excape = solve(index+1,n,arr,temp);
28
29            include = solve(index+1,n,arr,temp+arr[index]);
30        }
31
32        return max(excape , include);
33
34
35    }
36    int maxLength(vector<string>& arr) {
37        int n = arr.size();
38        return solve(0,n,arr,"");
39    }
40};