// class Solution {
// public:
//     int bitwiseComplement(int n) {
//         if(n == 0) return 1;
//         int ans = 0, pos = 0;
//         while(n>0){
//             int bit = (n&1)^1;
//             ans |= (bit << pos);
//             n >>= 1;
//             pos++;
//         }
//         return ans;
//     }
// };

// // class Solution {
// // public:
// //     int bitwiseComplement(int n) {
// //         if(n == 0) return 1;
// //         int mask = 1;

// //         while(mask <= n)
// //             mask <<= 1;

// //         return (mask - 1) ^ n;
// //     }
// // };



class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;
        int mask = 1;

        while(mask <= n)
            mask <<= 1;

        return mask-n-1;
    }
};