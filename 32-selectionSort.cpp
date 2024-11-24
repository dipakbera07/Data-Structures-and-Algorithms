#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int st=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[st]){
                st=j;
            }
        }
        swap(arr[i],arr[st]);
    }
}

void printData(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[]={2,1,3,6,5};
    int n=5;
    selectionSort(arr,n);
    printData(arr,n);
    return 0;
}