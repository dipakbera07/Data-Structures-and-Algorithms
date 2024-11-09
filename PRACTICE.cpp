#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int count=1,ans=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                count++;
            }
            else{
                count=1;
                ans=nums[i];
            }
            if(count>n/2){
                return ans;
        }
        }
        return ans;
    }
};

int main(){
    vector<int>nums={2,3,4,5,2,2,2,4,2,2,3,4,2};
    Solution a;
    cout<<a.majorityElement(nums);


    return 0;
}