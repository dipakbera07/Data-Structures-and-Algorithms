#include<iostream>
#include<vector>
using namespace std;

//------------ NORMAL WAY TO DO PERFORM PAIRSUM ---------------

// int pairSum(int arr[],int size,int target){
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if((arr[i]+arr[j])==target){
//                 cout<<"Two elements are found at index: "<<i<<","<<j<<endl;
//             }
//         }
//     }
//     return -1;
// }

// int main(){
//     int arr[]={2,5,4,7,9,1,6};
//     int size=7;
//     int target=16;
//     pairSum(arr,size,target);
//     return 0;
// }

//------------- SAME THINGS AS UPPER USING VECTOR -------------

vector<int> pairSum(vector<int>nums,int size,int target){
    vector<int>ans;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if((nums[i]+nums[j])==target){
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                return ans;
            }
        }
    }
    return ans;

}

int main(){
    vector<int>nums={2,4,6,8,9,1,3,7};
    int target=17;
    int size=nums.size();
    vector<int> ans=pairSum(nums,size,target);
    cout<<ans[0]<<","<<ans[1];
    return 0;
}