class Solution {
public:
    int bestClosingTime(string& customers) {
        int n = customers.size();
    
        int penalty=0;//without adding y_rem does not matter 
        int minP=penalty, minI=0;
    
        for (int i=1; i<=n; i++) {
            int y=customers[i-1]=='Y'?1:-1;
            penalty-=y;
            if (minP>penalty) {
                minP=penalty;
                minI=i;
            }
        }
        return minI;
    }
};

// class Solution {
// public:
//     int bestClosingTime(string customers) {
//         int n = customers.size();
//         int y_rem = count(customers.begin(), customers.end(), 'Y');
//         int nn = 0;
        
//         int penalty = nn+y_rem;
//         int minP=penalty, minI=0;
        
//         for (int i=1; i <= n; i++) {
//             int y=customers[i-1] == 'Y';
//             y_rem -= y;
//             nn+=(1-y); 
//             penalty=nn+y_rem;
            
//             if (minP> penalty) {
//                 minP=penalty;
//                 minI=i;
//             }
//         }
//         return minI;
//     }
// };