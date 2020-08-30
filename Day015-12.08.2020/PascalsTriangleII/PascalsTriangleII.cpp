//  https://leetcode.com/problems/pascals-triangle-ii/
class Solution {
public:
    int ncr(int n,int i){
        long long int res=1;
        for(int j=1;j<=i;j++){
            res *= n;
            res /= j;
            n--;
        }
        return res;
    }
    vector<int> getRow(int rowIndex) {
        vector<int> soln;
        for(int i=0;i<=rowIndex;i++){
            if(i<=rowIndex/2) soln.push_back(ncr(rowIndex,i));
            else soln.push_back(soln[rowIndex-i]);
        }
        return soln;
    }
};
