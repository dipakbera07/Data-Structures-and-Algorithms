#include<iostream>
#include<vector>
using namespace std;

vector<int> productArray(vector<int>nums){
    int n=nums.size();
    vector<int>ans(n,1);
    for(int i=1;i<n;i++){
        ans[i]=ans[i-1]*nums[i-1];
    }
    int sufix=1;
    for(int i=n-2;i>=0;i--){
        sufix *= nums[i+1];
        ans[i]= ans[i]*sufix;
    }
    return ans;
}

int main(){
    vector<int>nums={1,2,3,4};
    vector<int> ans=productArray(nums);
    for(int i=0;i<nums.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}