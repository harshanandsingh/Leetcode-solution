// Last updated: 5/17/2026, 8:31:21 AM
1class Solution {
2public:
3    long long integerktheroot(long long n,int k){
4        if(n<0) return 0;
5        if(n<=1) return n;
6        if(k == 1) return n;
7
8        long long res = pow(n,1.0/k);
9        while(pow(res+1,k)<=n){
10            res++;
11        }
12        while(pow(res,k) > n){
13            res--;
14        }
15        return res;
16    }
17    
18    int countKthRoots(int l, int r, int k) {
19        // lets see count of x^k <= r and x^k < l , then subtract them to get the final answer
20        long long high = integerktheroot(r,k);
21        if(l==0){
22            return high + 1;
23        }
24        long long low = integerktheroot(l-1,k);
25        return high - low;
26
27
28        
29        // issue in this approch 
30        // int a = floor(pow((double)l,(1.0/k)));
31        // int b = pow((double)r,(1.0/k));
32        // return b-a+1;
33    }
34};