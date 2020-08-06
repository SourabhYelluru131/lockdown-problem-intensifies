//https://leetcode.com/problems/detect-capital/solution/
class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.size()==1 || word.size()==0) return true;
        vector<bool> wb;
        for(auto x:word){
            if(int(x)>91) wb.push_back(false);
            else wb.push_back(true);
        }
        if(!wb[0]){
            int i;
            for(i=1;i<wb.size();i++) if(wb[i]) return false;
            if(i==wb.size()) return true;
            else return false;
        }
        else{
            int i;
            for(i=1;i<wb.size()-1;i++){
                if(wb[i]!=wb[i+1]) return false;
            }
            if(i==wb.size()-1) return true;
            else return false;
        }
    }
};
