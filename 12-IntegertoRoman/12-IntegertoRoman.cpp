// Last updated: 7/13/2025, 7:51:35 AM
class Solution {
public:
    string intToRoman(int num) {
        // vector<int>    val{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        // vector<string> sym{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        // int n = val.size();
        // string res = "";
        // for (int i = 0; i < val.size(); i++) {
        //     while (num >= val[i]) {
        //         num -= val[i];
        //         res += sym[i];
        //     }
        // }
        // return res;

        vector<int>number = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string>romen_number = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

        string res="";
        for(int i=0;i<number.size();i++){
            while(num>=number[i]){
                num-=number[i];
                res+=romen_number[i];
            }
        }
        return res;
    }
};