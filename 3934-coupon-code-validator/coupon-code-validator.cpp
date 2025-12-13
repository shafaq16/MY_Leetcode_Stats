class Solution {
public:
    bool check(const string &s) {
        if (s.empty()) return false;
        for (char c : s) {
            if (!isalnum(c) && c != '_') {
                return false;
            }
        }
        return true;
    }

    vector<string> validateCoupons(vector<string>& code,
                                   vector<string>& businessLine,
                                   vector<bool>& isActive) {
        vector<pair<string, string>> valid; // (businessLine, code)
        int n = code.size();

        for(int i = 0; i < n; i++){
            if (isActive[i] &&
                check(code[i]) &&
                businessLine[i] != "invalid") {
                valid.push_back({businessLine[i], code[i]});
            }
        }

        unordered_map<string, int> priority{
            {"electronics", 0},
            {"grocery",     1},
            {"pharmacy",    2},
            {"restaurant",  3}
        };

        sort(valid.begin(), valid.end(),
             [&](auto &a, auto &b) {
                 if (priority[a.first] != priority[b.first]) {
                     return priority[a.first] < priority[b.first];
                 }
                 return a.second < b.second;
             });

        vector<string> ans;
        ans.reserve(valid.size());
        for (auto &p : valid) {
            ans.push_back(p.second);
        }
        return ans;
    }
};
