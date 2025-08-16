class Solution {
public:
    int maximum69Number (int num) {
       int pos = -1, cnt = 0, temp = num;
        while (temp > 0) {
        if (temp % 10 == 6)  pos = cnt;
        temp /= 10;
        cnt++;
    }
       return (pos==-1)?num: (num + (3*pow(10,pos)));
    }
};


// class Solution {
// public:
//     int maximum69Number (int num) {
//         string temp = to_string(num);
//         for(int i = 0; i<temp.size(); i++){
//             if(temp[i]=='6'){
//                 temp[i] = '9';
//                 break;
//             }
//         }

//         return num = stoi(temp);
//     }
// };