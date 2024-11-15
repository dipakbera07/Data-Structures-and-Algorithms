#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>nums,int target){
    int n=nums.size();
    int min=0,max=n-1;
    while(min<=max){
        int mid = (min+max)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            min = mid+1;
        }
        else{
            max = mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int>nums={2,3,4,5,6,7,8};
    int ans = binarySearch(nums,4);
    cout<<ans;
    return 0;
}