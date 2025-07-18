// Last updated: 7/18/2025, 10:46:16 PM
class Solution {
public:
    bool isPalindrome(string s) {
        // int n=s.length();
        // string s1="";
        // for(int i=0;i<n;i++){
        //     /*if(s[i]>='A' && s[i]<= 'Z') s1 = s1+char(s[i]+32);
        //     else if(s[i]>='a' && s[i]<='z') s1 = s1+s[i];
        //     else if(s[i]>='0' && s[i]<='9') s1 = s1+s[i];*/
        //     if(iswalnum(s[i])) s1+= (char)tolower(s[i]);
        // }
        // //cout<<s1<<endl;
        // /*int i=0,j=s1.length()-1;
        // while(i<j){
        //     if(s1[i] != s1[j]){
        //         //cout<<s1[i]<<" "<<s1[j]<<endl;
        //         return false;
        //     }
        //     i++;j--;
        // }
        // return true;*/
        // s=s1;
        // reverse(s1.begin(),s1.end());
        // cout<<s<<endl;
        // return s1==s;

        int n = s.size();
        int i=0,j=n-1;
        // while(i<=j){
        //     while(!iswalnum(s[i])) i++;
        //     while(!iswalnum(s[j])) j--;
        //     s[i]=(char)tolower(s[i]);
        //     s[j]=(char)tolower(s[j]);
        //     if(s[i]==s[j]){
        //         i++;j--;
        //     }
        //     else return false;
        // }
        while (i <= j) {
            while (i < j && !isalnum(s[i])) i++;
            while (i < j && !isalnum(s[j])) j--;

            if (tolower(s[i]) != tolower(s[j])) return false;

            i++;
            j--;
        }
        return true;
    }
};