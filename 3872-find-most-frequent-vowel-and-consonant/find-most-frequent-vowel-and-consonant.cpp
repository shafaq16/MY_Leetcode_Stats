class Solution {
public:
    int maxFreqSum(string s) {
        int vow = 0, con = 0;
        unordered_map<char,int> v;
        unordered_map<char,int> c;
        for(char& ch: s){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                v[ch]++;
            }
            else{
                c[ch]++;
            }
        }
        for(auto& pair: v){
            vow = max(vow,pair.second);
        }
        for(auto& pair: c){
            con = max(con,pair.second);
        }
        return vow+con;
    }
};