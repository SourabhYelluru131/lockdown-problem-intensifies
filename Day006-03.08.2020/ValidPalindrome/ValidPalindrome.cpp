//https://leetcode.com/problems/valid-palindrome/
class Solution {
public:
    bool isPalindrome(string s) {
        string news;
        for(auto x:s) if(('A'<=x && x<='Z') || ('a'<=x && x<='z') || ('0'<=x && x<='9')) news.push_back(x);
        cout << news;
        int start=0,end=news.length()-1;
        while(start<end){
            int a = int(news.at(start)), b = int(news.at(end)), c = 'a'-'A';
            cout << a << " " << b << " " << int('a') << endl;
            if(a!=b){
                if(abs(a-b)!=32) return false;
                if(a-b == 32) if(b < 'A' || a > 'z') return false;
                if(b-a == 32) if(a < 'A' || b > 'z') return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
