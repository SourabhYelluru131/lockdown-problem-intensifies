//  https://leetcode.com/problems/longest-palindrome/
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> hash;
        for(auto x:s) hash[x]++;
        int flag=0,count=0,ct_o=0,maxt=INT_MIN;
        vector<int> odd;
        for(auto it:hash){
            if(it.second%2==0) count+=it.second;
            else{
                flag = 1;
                odd.push_back(it.second);
            }
        }
        if(flag){
            for(int x:odd) ct_o+=x-1;
            count+=ct_o+1;
        }
        return count;
    }
};
