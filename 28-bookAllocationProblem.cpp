#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int>arr,int n,int m,int mid){
    int maxAllowed = mid;
    int st = 1 , pages = 0 ;
    for(int i=0;i<n;i++){
        if(arr[i]>maxAllowed){ //edge case 
            return false;
        }
        if(pages+arr[i]<=maxAllowed){
            pages += arr[i];
        }
        else{
            st++;
            pages = arr[i];
        }
    }
    return st > m ? false : true ;

}

int allocateBooks(vector<int>arr,int n,int m){
    if (m>n){
        return -1;
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    int ans = -1;
    int min = 0 , max = sum;
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
    vector<int>arr={2,1,3,4};
    int n = 4 , m = 2 ;
    int ans = allocateBooks(arr,n,m);
    cout<<"Min possible max Pages: "<<ans<<endl;
    return 0;
}