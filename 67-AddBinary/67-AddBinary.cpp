// Last updated: 11/12/2025, 7:08:49 PM
class Solution {
public:
    string addBinary(string a, string b) {

        string result = "";
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;

            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';

            result += (sum % 2) + '0';  // bit to append
            carry = sum / 2;            // update carry
        }

        reverse(result.begin(), result.end());
        return result;
        
        // reverse(a.begin(),a.end());
        // reverse(b.begin(),b.end());
        // string result = "";

        // int n = a.size() , m = b.size();
        // int i=0,j=0;
        // char carry = '0';
        // while(i<n && j<m){
        //     if(a[i]=='1' && b[i]=='1' && carry =='1'){
        //         carry = '1';
        //         result+='1';
        //     }
        //     else if((a[i]=='1'&& b[i]=='0' && carry == '1' )||(a[i]=='0'&& b[i]=='0' && carry == '1' )){
        //         carry ='1';
        //         result+='0';
        //     }
        //     else if((a[i]=='1'&& b[i]=='0' && carry == '0' ) || (a[i]=='0'&& b[i]=='1' && carry == '0' )){
        //         result+='1';
        //         carry='0';
        //     }
        //     else{
        //         result+='0';
        //         carry = '0';
        //     }
        //     i++;
        //     j++;
        // }
        // while(i<n){
        //     if(a[i]=='1' && carry=='1'){
        //         carry = '1';
        //         result+='0';
        //     }
        //     else if((a[i]=='0' && carry == '1') || (a[i]=='1' && carry == '0')){
        //         carry = '0';
        //         result+='1';
        //     }
        //     else{
        //         result+='0';
        //         carry = '0';
        //     }
        //     i++;
        // }
        // while(j<m){
        //     if(b[j]=='1' && carry=='1'){
        //         carry = '1';
        //         result+='0';
        //     }
        //     else if((b[j]=='0' && carry == '1') || (b[j]=='1' && carry == '0')){
        //         carry = '0';
        //         result+='1';
        //     }
        //     else{
        //         result+='0';
        //         carry = '0';
        //     }
        //     j++;
        // }
        // if(carry=='1') result+='1'; 
        // reverse(result.begin(),result.end());
        // return result;
    }
};