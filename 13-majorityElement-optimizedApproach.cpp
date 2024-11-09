#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int> nums, int size)
{
    sort(nums.begin(), nums.end()); // in this way we can sort an array in asending order
    int count = 1;
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1]) 
        {
            count++;
        }
        else
        {
            count = 1;
        }
        if (count > n / 2)
        {
            return nums[i];
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {2,3,2};
    int size = nums.size();
    int ans= majorityElement(nums, size);
    cout<<ans;
    return 0;
}