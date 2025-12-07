class Solution {
public:
    string removeTrailingZeros(string num) {
        int idx;
        for(int i = num.length()-1; i>=0; i--){
            if(num[i]!= '0'){
                idx = i;
                break;
            }
        }
        string ans ="";
        for(int i=0; i<=idx; i++){
            ans += num[i];
        }
        return  ans;
    }
};