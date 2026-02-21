class Solution {
public:
    bool check(int n) {
        int cnt = 0;
        while (n > 0) {
            n &= (n-1); 
            cnt++;       
        }

        if (cnt <= 1) return false;
        if (cnt <= 3) return true;
        if (cnt % 2 == 0 || cnt % 3 == 0) return false;
        for (int i = 5; i * i <= cnt; i += 6)
            if (cnt % i == 0 || cnt % (i + 2) == 0) return false;

        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for(int i = left; i<=right; i++){
            if(check(i)) ans++;
        }
        return ans;
    }
};