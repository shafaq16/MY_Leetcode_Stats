class Solution {
public:
   string getHappyString(int n, int k) {
    string chars = "abc";
    int count = 1 << (n - 1);
    if (k > 3 * count) return "";
    
    string ans;
    k--;
    ans += chars[k / count];
    k %= count;
    
    while (--n) {
        count >>= 1;
        for (char ch : chars) {
            if (ch != ans.back()) {
                if (k < count) {
                    ans += ch;
                    break;
                }
                k -= count;
            }
        }
    }
    return ans;
}
};