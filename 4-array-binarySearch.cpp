#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int target){
    int min=0;
    int max=size-1;
    while(min<=max){
        int mid=(min+max)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]<target){
            min=mid+1;
        }
        else{
        max=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[6]={2,3,4,5,6,7};
    int index=binarySearch(arr,6,5);
    cout<<"Element found at index: "<<index<<endl;
    return 0;
}