class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.size()<3) return 0;
        int cnt = 0;
        for(int i = 0; i<s.size()-2; i++){
            unordered_set<int> st;
            for(int j = i; j<i+3; j++){
                st.insert(s[j]);
            }
            if(st.size()==3) cnt++;
        }
        return cnt;
    }
};