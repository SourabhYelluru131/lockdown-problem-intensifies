//  https://leetcode.com/problems/excel-sheet-column-number/
class Solution {
public:
    int titleToNumber(string s) {
        int res=0;
        for(int i=0;i<s.length();i++){
            int a = int(s.at(i)-'A'+1);
            res = res*26 + a;
        }
        return res;
    }
};
