class Solution {
public:
    int countBinarySubstrings(string s) {
       int n = s.size();
    
        int cnt = 1, prev = 0, ans=0;
        for(int i = 1 ; i<n ; i++){
            if(s[i] == s[i-1]){ 
                cnt++;
            }
            else{
                ans += min(cnt,prev);
                prev = cnt;
                cnt = 1;
                // prev=exchange(cur, 1) :: same chiz upar wala
            }
        }
        ans += min(cnt,prev);
        return ans;
    }
};