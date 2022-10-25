#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int,int>present;
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            present[nums[i]]=i+1;
        }

        for(int i=0;i<nums.size();i++){
            if(present[target - nums[i]] && present[target - nums[i]]!= i+1){
                ans.push_back(i);
                ans.push_back(present[target - nums[i]] - 1);
               break;
            }
        }

       return ans;
    }
};

int main()
{
    cout<<Solution;
}
