class Solution {
public:
    long long flowerGame(int n, int m) {
        long long sum =  n+m;
        long long even1 = 0, odd1 = 0 , even2= 0, odd2 = 0;
        if(n%2 != 0){
            even1 = n/2;
            odd1 = n/2 + 1;
        }
        else{
            even1  = n/2;
            odd1 = n/2;
        }

        if(m%2 != 0){
            even2 = m/2;
            odd2 = m/2 + 1;
        }
        else{
            even2  = m/2;
            odd2 = m/2;
        }


        return (even1 * odd2) + (even2 * odd1);
    }
};