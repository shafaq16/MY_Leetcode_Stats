class Solution {
public:
    string sortVowels(string s) {
        vector<char> vowel;
        int n = s.size();
        for(int i = 0 ; i<n ; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                vowel.push_back(s[i]);
            }
        }
        sort(vowel.begin(),vowel.end());
        int j = 0;
        for(int i = 0 ; i<n ; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                s[i] = vowel[j++];
            }
        }
        return s;
    }
};