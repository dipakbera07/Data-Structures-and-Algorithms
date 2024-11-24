#include<iostream>
using namespace std;

int peakElement(int arr[],int n){
    int min =1 , max = n-2 ; //here we start our min = 0 and max = n-1 . as it is a mountain array so the first and last index is not going to be peak value . thats why we ignore the first and last value . also it helps us to avoid some corner cases that may occur in our code.
    while(min<=max){
        int mid = min + (max-min)/2;
        if(arr[mid-1]<arr[mid]>arr[mid+1]){
            return mid;
        }
        if(arr[mid-1]<arr[mid]){ //this condition compare the value of arr[mid-1] and arr[mid] . we are checking this condition because this is goging to tell us the left part of mid is sorted or not if it is sorter it accending order that means we dont have our peak element in the left part . so we are making the min as mid+1 for next iteration . where it checks the right part after min index . 
            min = mid + 1;
        }
        else{ //else part execute when the left part of arr is not sorted in asending orde , that means our peak element is in the left part after mid , so we are making our max as mid-1 . so for the next itaration it will discard the rigt part after mid index value.
            max = mid - 1; 
        }
    }
    return -1;
}

int main(){
    int arr[]={5,6,90,4,3,2};
    int n = sizeof(arr)/sizeof(int);
    int ans = peakElement(arr,n);
    cout<<"Peak element index: "<<ans<<endl;
    return 0;
}