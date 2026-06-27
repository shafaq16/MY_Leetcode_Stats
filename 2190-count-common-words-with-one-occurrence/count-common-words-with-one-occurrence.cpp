// // class Solution {
// // public:
// //     int countWords(vector<string>& words1, vector<string>& words2) {
// //        unordered_map<string,int> mp1, mp2;
// //         for(auto &s : words1)
// //             mp1[s]++;

// //         for(auto &s : words2)
// //             mp2[s]++;
// //         int cnt = 0;
// //         for(auto &p : mp1){
// //             if(p.second == 1 && mp2[p.first] == 1)
// //                 cnt++;
// //         }
// //         return cnt;
// //     }
// // };

// class Solution {
// public:
//     int countWords(vector<string>& words1, vector<string>& words2) {
//         unordered_map<string, int> mp;
//         for (auto &s : words1) mp[s]++;

//         for (auto &s : words2) {
//             if (mp.find(s) == mp.end()) continue;

//             if (mp[s] == 1) mp[s] = 0;       // once in both arrays
//             else if (mp[s] == 0) mp[s] = -1; // appeared again in words2
//             else if (mp[s] > 1) mp[s] = -1;  // duplicated in words1
//             // if already -1, do nothing
//         }
//         int cnt = 0;
//         for (auto &p : mp)
//             if (p.second == 0) cnt++;

//         return cnt;
//     }
// };

class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> mp;
        for (auto &s : words1) mp[s]++;
 
        int cnt = 0;
        for (auto &s : words2) {
            if (mp.find(s) == mp.end())  continue;
            if (mp[s] == 1) {
                cnt++;
                mp[s] = 0;      // counted once in both
            }
            else if (mp[s] == 0) {
                cnt--;
                mp[s] = -1;     // duplicate in words2
            }
        }
        return cnt;
    }
};