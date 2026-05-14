class Solution {
public:
    bool rotateString(string s, string g) {
       return s.length() == g.length() && (s + s).find(g) != string::npos;
    }
};