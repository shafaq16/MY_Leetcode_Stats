class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n = moves.length();
        int l = 0, r = 0;
        for(char ch: moves){
            if(ch == 'L') l++;
            else if(ch == 'R') r++;
        }
        int step = abs(l-r);
        cout<<step;
        return n+step-(l+r);
    }
};