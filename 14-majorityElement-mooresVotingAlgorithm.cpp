#include<iostream>
using namespace std;

int majorityElement(vector<int>nums,int size){
    int count=0,ans=0;
    for(int i=0;i<size;i++){
        if(count==0){
            ans=nums[i];
        }
        if(ans==nums[i]){
            count++;
        }
        else{
            count--;
        }
    }
    return ans;
}

int main(){
    vector<int>nums={2,3,4,2,2,2,4,2,2,2,2};
    int size=nums.size();
    cout<<majorityElement(nums,size);
    return 0;
}