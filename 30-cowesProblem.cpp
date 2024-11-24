#include<iostream>
using namespace std;

bool isValid(vector<int>arr,int n , int c , int minAllowedDis){
    int cow = 1 ,lastStall = arr[0];
    for(int i=1 ; i< n ; i++){
        if(arr[i]-lastStall>=minAllowedDis){
            cow++;
            lastStall = arr[i]; 
        }
        if(cow==c){
            return true;
        }
    }
    return false ;
}

int largestDistance(vector<int>arr,int q,int c){
    sort(arr.begin(),arr.end());
    int min = 1 , max = arr[q-1]-arr[0] , ans = -1;
    while(min <= max){ 
        int mid = min + ( max - min ) / 2 ;
        if(isValid(arr,q,c,mid)){
            min = mid + 1 ;
            ans = mid ; 
        }
        else{
            max = mid - 1 ;
        }
    }
    return ans;
}

int main (){
    vector<int>arr={1,2,8,4,9};
    int n = arr.size();
    int ans = largestDistance(arr,n,3);
    cout<<"MAX DIS: "<<ans<<endl;
    return 0;
}