#include<iostream>
using namespace std;

int binarySearch(int arr[],int target,int min,int max){
    
    while(min<=max){
        // int mid=(min+max)/2;
        int mid = min + (max-min)/2; //this is the optimal way to calculate the mid index.
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]<target){
            return binarySearch(arr,target,mid+1,max);
        }
        else{
            return binarySearch(arr,target,min,mid-1);
        }
    }
    return -1;
}
int main(){
    int arr[6]={2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(int);
    int index=binarySearch(arr,5,0,n-1);
    cout<<"Element found at index: "<<index<<endl;
    return 0;
}