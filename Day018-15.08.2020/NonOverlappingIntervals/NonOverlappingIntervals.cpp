//  https://leetcode.com/problems/non-overlapping-intervals/
class Solution {
public:
    bool comp(vector<int> a,vector<int> b) {
	return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(!intervals.size()) return 0;
        int sol = 0;
        sort(intervals.begin(), intervals.end(), [this] (vector<int> a, vector<int> b) {
    return comp(a, b); });
        int end = intervals[0][0];
        for(auto x:intervals){
            if(x[0]<end) sol++;
            else end = x[1];
        }
        return sol;
    }
};
