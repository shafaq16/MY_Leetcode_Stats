class Solution {
public:
    bool isPalindrome(string s) {

        string str = "";
        for(char ch: s){
            if(isalnum(ch)) str += tolower(ch);
        }


        int n = str.size();
        int i = 0, j = n-1;
        while(i<=j){
            if(str[i++] != str[j--]){
                return false;
            }
        }
        return true;
    }
};