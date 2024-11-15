#include<iostream>
#include<vector>
using namespace std;

vector<int> productArray(vector<int>nums){
    int n=nums.size();
    vector<int>prefix(n,1);
    vector<int>sufix(n,1);
    vector<int>ans(n,1);
    //PREFIX
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]*nums[i-1];
    }
    //SUFIX
    for(int i=n-2;i>=0;i--){
        sufix[i]=sufix[i+1]*nums[i+1];
    }
    //ANS
    for(int i=0;i<n;i++){
        ans[i]=prefix[i]*sufix[i];
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