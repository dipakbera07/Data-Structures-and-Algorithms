#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int target){
    int min = 0 , max = n-1 ;
    while(min<=max){
        int mid = min + (max-min)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[min]<=arr[mid]){
            if(arr[min]<=target && target<=arr[mid]){
                max = mid-1;
            }
            else{
                min = mid+1;
            }
        }
        else{
            if(arr[mid]<=target && target <=arr[max]){
                min = mid + 1;
            }
        }
        }
    return -1;
}

int main(){
    int arr[]={2,3,4,5,6,7,0,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans=binarySearch(arr,n,0);
    cout<<"Element found at Index: "<<ans<<endl;
    return 0;
}