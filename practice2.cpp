// Binary search in an Array --
#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int target){
    int min = 0 , max = size-1 ;
    while(min<=max){
        int mid = min+(max-min)/2;
        if(arr[target]==arr[mid]){
            return mid;
        }
        if(arr[mid]<arr[target]){
            mid=mid+1;
        }
        else{
            max=mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[]={2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(int);
    int target = 5 ;
    int index=binarySearch(arr,7,5);
    cout<<"Element found at Index: "<<index<<endl;
    return 0;
}