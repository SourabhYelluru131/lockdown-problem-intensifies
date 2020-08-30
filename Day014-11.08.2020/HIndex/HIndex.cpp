//  https://leetcode.com/problems/h-index/
class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int count=0;
        for(int i=citations.size()-1;i>=0;i--){
            if(citations[i]==count+1 && citations[i]!=0) return count+1;
            if(citations[i]<count+1){
                if(citations[i]!=0 || count > 0) return count;
                else return 0;
            }
            count++;
        }
        return count;
    }
};
