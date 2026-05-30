// class Solution {
// public:
//     string reverseOnlyLetters(string s) {
//         string temp;
//         for(char ch: s){
//             if(isalpha(ch)) temp += ch;
//         }
//         reverse(temp.begin(),temp.end());
//         int j = 0, n = s.size();
//         for(int i = 0; i< n ; i++){
//             if(isalpha(s[i])){
//                 s[i] = temp[j];
//                 j++;
//             }
//         }
//         return s;
//     }
// };

class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i = 0, j = s.size() - 1;
        while(i < j) {
            while(i < j && !isalpha(s[i])) i++;
            while(i < j && !isalpha(s[j])) j--;
            swap(s[i], s[j]);
            i++; j--;
        }
        return s;
    }
};