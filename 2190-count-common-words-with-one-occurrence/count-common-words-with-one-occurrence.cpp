class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
       unordered_map<string,int> mp1, mp2;
        for(auto &s : words1)
            mp1[s]++;

        for(auto &s : words2)
            mp2[s]++;
        int cnt = 0;
        for(auto &p : mp1){
            if(p.second == 1 && mp2[p.first] == 1)
                cnt++;
        }
        return cnt;
    }
};