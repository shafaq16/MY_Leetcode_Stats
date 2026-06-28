class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        string s = s1 + " " + s2;
        unordered_map<string,int> mp;
        string w = "";
        for(char c : s) {
            if(c == ' ') {
                mp[w]++;
                w = "";
            } else {
                w += c;
            }
        }
        mp[w]++;
        // if(w != "") mp[w]++;
        vector<string> ans;
        for(auto &p : mp) {
            if(p.second == 1)
                ans.push_back(p.first);
        }
        return ans;
    }
};


//
//class Solution {
// public:
//     vector<string> uncommonFromSentences(string s1, string s2) {
//         unordered_map<string,int> mp;
//         addWords(s1, mp);
//         addWords(s2, mp);
//         vector<string> ans;
//         for(auto &p : mp) {
//             if(p.second == 1)
//                 ans.push_back(p.first);
//         }
//         return ans;
//     }
// private:
//     void addWords(string &s, unordered_map<string,int> &mp) {
//         string word = "";
//         for(char c : s) {
//             if(c == ' ') {
//                 mp[word]++;
//                 word = "";
//             } else {
//                 word += c;
//             }
//         }
//         mp[word]++;
//     }
// };