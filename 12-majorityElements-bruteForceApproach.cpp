#include <iostream>
#include <vector>
using namespace std;

vector<int> majorityElement(vector<int> &nums, int size)
{
    vector<int>result;
    for (int i : nums)
    {
        int count = 0;
        for (int j : nums)
        {
            if (j == i)
            {
                count++;
            }
        }
        if (count > size / 2)
        {
            nums.push_back(i);
        }
    }
    return nums;
}

int main()
{
    vector<int> nums = {2, 3, 4, 5, 3, 2, 4, 5, 2, 34, 2, 3, 2, 3, 2, 2, 2, 2};
    int size = nums.size();
    vector<int> ans = majorityElement(nums, size);
    cout << "emelemt is: "<<nums[0]<<endl;
    return 0;
}