#include<iostream>
using namespace std;

int main(){
    int arr[5]={2,3,4,5,6};
    int size=sizeof(arr)/sizeof(int);
    int smallest=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]< smallest){
            smallest=arr[i];
        }
    }
    int biggest=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]> biggest){
            biggest=arr[i];
        }
    }
    cout<<"Smallest value in the array is: "<<smallest<<endl;
    cout<<"Biggest value in the array is: "<<biggest<<endl;



    return 0;
}