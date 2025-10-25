class Solution {
public:
    int totalMoney(int n) {
        int prev = 1, mon_cnt = 1, mon =1;
        int sum = 0;
        for(int i=1; i<=n; i++){
            if(mon_cnt%8 == 0){
                mon++;
                prev = mon;
                mon_cnt = 1;
            }
            sum += prev; 
            mon_cnt ++;
            prev++;
        }
        return sum;
    }
};