//  https://leetcode.com/problems/distribute-candies-to-people/
class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> res(num_people);
        int i,cur = 1;
        while(cur<=candies){
            for(i=0;i<num_people;i++){
                if(cur>candies) break;
                res[i] += cur;
                candies-=cur;
                cur++;
            }
        }
        res[i%num_people] += candies;
        return res;
    }
};
