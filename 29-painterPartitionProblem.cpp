#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int>&arr,int n,int m,int mid){
    int maxAllowed = mid;
    int painter = 1 , time = 0 ;
    for(int i=0;i<n;i++){
        if(time+arr[i]<=maxAllowed){
            time += arr[i];
        }
        else{
            painter++;
            time = arr[i];
        }
    }
    return painter <= m ;

}

int painterPartition(vector<int>&arr,int n,int m){
    int sum = 0 , maxVal =INT_MIN;
    for(int i=0;i<n;i++){
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }
    int ans = -1;
    int min = maxVal , max = sum;
    while(min<=max){
        int mid = min + (max-min)/2;
        if(isValid(arr,n,m,mid)){
            ans = mid;
            max = mid-1;
        }
        else{
            min = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int>arr={40,30,10,20};
    int n = 4 , m = 2 ;
    int ans = painterPartition(arr,n,m);
    cout<<"Max Time: "<<ans<<endl;
    return 0;
}