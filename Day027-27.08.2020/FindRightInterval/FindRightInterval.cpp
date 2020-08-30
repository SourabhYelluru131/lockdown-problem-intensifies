//  https://leetcode.com/problems/find-right-interval/
class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<int> starts;
        for(int i=0;i<intervals.size();i++){
            vector<int> a = intervals[i];
            starts.push_back(a[0]);
        }
        vector<int> res;
        vector<int> st = starts;
        sort(st.begin(),st.end());
        for(int i=0;i<intervals.size();i++){
            int end = intervals[i][1];
            if(end>st[st.size()-1]) res.push_back(-1);
            else{
                int low = 0, high = st.size(); 
                while (low != high) {
                    int mid = (low + high) / 2; 
                    if(st[low]>end) high = low;
                    else{
                        if (st[mid] < end) {
                            low = mid + 1;
                        }
                        else {
                            if(st[mid]==end){
                                high = low = mid;
                            }
                            else high = mid;
                        } 
                    }
                }
                int pos = find(starts.begin(),starts.end(),st[high]) - starts.begin();
                res.push_back(pos);
            }
        }
        return res;
    }
};
