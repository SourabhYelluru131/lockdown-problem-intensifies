//  https://leetcode.com/problems/sort-array-by-parity/
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> B;
        for(int x: A){
            if(x%2) B.push_back(x);
            else{
                if(B.size()) B.insert(B.begin(),x);
                else B.push_back(x);
            }
        }
        return B;
    }
};
