// Last updated: 6/12/2025, 8:14:36 PM
class Solution {
public:
    // int number(int a){
    //     int len=0;
    //     while(a>0){
    //        len++;
    //        a/=10; 
    //     }
    //     return len;
    // }
    int compress(vector<char>& ch) {
        int i = 0; // write index
        int n = ch.size();
        int j = 0; // read index

        while (j < n) {
            char current = ch[j];
            int count = 0;

            // Count occurrences of current character
            while (j < n && ch[j] == current) {
                j++;
                count++;
            }

            // Write the character
            ch[i++] = current;

            // Write the count if greater than 1
            if (count > 1) {
                string cnt = to_string(count);
                for (char c : cnt) {
                    ch[i++] = c;
                }
            }
        }

        return i;
        // int n = ch.size();
        // int count=1;
        // int i=0,j=0,current = ch[0];
        // while(j<n){
        //     if(ch[j]==current){
        //         count++;
        //     }
        //     else{
        //         ch[i++]=current;
        //         current=ch[j];
        //         string c = to_string(count);
        //         int k = c.size();
        //         for(int m=0;m<k;m++){
        //             ch[i++]=c[m];
        //         }
        //         count=1;
        //     }
        // }
        // return i;
    }
};