class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.length();
        vector<int> first(26,n), last(26,-1);
        for(int i = 0; i<n; i++){
           int ch = s[i]-'a';
           first[ch] = min(first[ch],i);
           last[ch] = i; 
        }
        int ans = 0;
        for(int c = 0; c<26; c++){
            int l = first[c];
            int r = last[c];
            if(r-l < 2) continue;

            bool seen[26] = {0};
            for(int i = l+1 ; i<r; i++){
                int idx = s[i]-'a';
                if(!seen[idx]){
                    seen[idx] = true;
                    ans++;
                }
            } 
        }
        return ans;
    }
};