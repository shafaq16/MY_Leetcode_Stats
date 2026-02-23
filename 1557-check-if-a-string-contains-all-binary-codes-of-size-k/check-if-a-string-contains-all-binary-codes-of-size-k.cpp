// class Solution {
// public:
//     bool hasAllCodes(string s, int k) {
//         int distinct_str = 1<<k;
//         unordered_map<string,int> mp;
       
//         for(int i = 0; i+k <= s.size(); i++){
//             string sub = "";
//             for(int j = i; j<i+k; j++){
//                 sub += s[j]; 
//             }
//             mp[sub]++;
//         }
//         return mp.size() == distinct_str;
//     }
// };


///---------    METHOD 2 -------------
class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string> st;
         int distinct_str = 1<<k;

        for (int i = 0; i + k <= s.size(); i++) {
            st.insert(s.substr(i, k));
        }

         return st.size() == distinct_str;
    }
};