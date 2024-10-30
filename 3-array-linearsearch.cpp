#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int target){
    for(int i=0;i<5;i++){
        if(arr[i]==target){
            cout<<"Element found at index: "<<i<<endl;
        }   
    }
    return -1;
}

int main(){
    int arr[5]={2,3,4,5,6};
    linearSearch(arr,5,3);
    return 0;
}