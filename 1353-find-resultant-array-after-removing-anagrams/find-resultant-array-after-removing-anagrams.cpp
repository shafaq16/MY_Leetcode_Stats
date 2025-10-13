class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int n =words.size();
        if(n==0) return words;
        vector<string>same = words;  // making a copy of the original words.
        for(auto &x : same){
            sort(x.begin(),x.end()); //storing in sorted order for anagrams 
        }
        vector<int>leader;  //making a array which stores the first index of same occuring element.
        leader.push_back(0);
        for(int i=1;i<n;i++){
            if(same[i]!=same[i-1]){
                leader.push_back(i);
            }
        }

        vector<string>ans;
        for(auto y : leader){   // for all the indices storing original word from words.
            ans.push_back(words[y]);
        }

        return ans;
    }
};