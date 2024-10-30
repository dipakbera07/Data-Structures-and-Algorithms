#include<iostream>
using namespace std;

int reverseArray(int arr[],int size){
    int low = 0;
    int high = size-1;
    while(low < high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
    return -1;
}

int main(){
    int arr[7]={3,7,1,98,34,67,2};
    int size=7;
    reverseArray(arr,7);
    for(int i=0;i<size;i++){
        cout<<"Element at index "<<i<<"is "<<arr[i]<<endl;
    }
    return 0;
}