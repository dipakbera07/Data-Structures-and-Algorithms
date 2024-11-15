#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int size, int target)
{
    vector<int>ans;
    int st = 0, end = size - 1;
    while (st < end)
    {
        int sum = nums[st] + nums[end];
        if (sum < target){
            st++;
        }
        else if(sum>target){
            end--;
        }
        else{
            ans.push_back(nums[st]);
            ans.push_back(nums[end]);
           
    }
    }
    return ans;
}
int main()
{
    vector<int>nums={2,3,4};
    int size=nums.size();
    int target=6;
    vector<int> ans = pairSum(nums,size,target);
    cout<<ans[0]<<","<<ans[1]<<endl;
    return 0;
}