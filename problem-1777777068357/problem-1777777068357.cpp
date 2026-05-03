// Last updated: 5/3/2026, 8:27:48 AM
1class Solution {
2public:
3    long long primesum[1010];
4    int max_v = 1001;
5    // vector<bool>isprime(max_v,true);
6    bool isprime[1010];
7    void prime(){
8        fill(isprime,isprime+1010,true);
9        isprime[0] = isprime[1]=false;
10        for(int p = 2;p*p < 1010;p++){
11            if(isprime[p]){
12                for(int i = p*p;i<1010;i+=p) isprime[i] = false;
13            }
14        }
15        primesum[0]=0;
16        for(int i=1;i<1010;i++){
17            primesum[i]=primesum[i-1] + (isprime[i]?i:0);
18        }
19    }
20    int reverse_num(int n){
21        int rev = 0; 
22        while(n > 0){
23            rev = rev*10 + (n%10);
24            n /= 10;
25        }
26        return rev;
27    }
28    int sumOfPrimesInRange(int n) {
29        int r = reverse_num(n);
30        int l = min(n,r);
31        int h = max(n,r);
32        prime();
33
34        return (l > 0) ? primesum[h] - primesum[l-1] : primesum[h];
35    }
36};