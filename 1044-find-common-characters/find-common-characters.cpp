class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n = words.size();
        unordered_map<char,int> mp;
        for(char ch : words[0]){
            mp[ch]++;
        }
        for(int i = 1; i<n ; i++){
            unordered_map<char,int> temp;
            for(char ch: words[i]){
                temp[ch]++;
            }
            for(auto it = mp.begin(); it != mp.end(); ){
                char ch = it->first;
                if(temp.find(ch) == temp.end()){
                    it = mp.erase(it);
                }
                else{
                    it->second = min(it->second , temp[ch]);
                    it++;
                }
            }
        }
        
        vector<string> ans;
        for(auto &pair: mp){
            while(pair.second > 0){
                ans.push_back(string(1,pair.first));
                pair.second--;
            }
        }
        return ans;
    }
};