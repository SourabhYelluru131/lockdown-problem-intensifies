//https://leetcode.com/problems/power-of-four/
class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num<=0) return false;
        cout << __builtin_popcount(num) << " " << __builtin_ctz(num) << endl;
        if(__builtin_popcount(num)>1) return false;
        if(__builtin_ctz(-num)%2) return false;
        return true;
    }
};
