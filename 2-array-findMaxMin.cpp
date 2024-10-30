#include<iostream>
using namespace std;

int main(){
    int arr[5]={2,3,4,5,6};
    int size=sizeof(arr)/sizeof(int); //calculating the total size of array
    int smallest=INT_MAX; //Here i use INT_MAX to compare with all elements in the array , as INT_MAX indiates as highest possible value.
    for(int i=0;i<size;i++){
        if(arr[i]< smallest){ //comparing with the biggest possible value and if the condition is true ,then update the smallest variable value.
            smallest=arr[i];
        }
    }
    int biggest=INT_MIN; //Here i use INT_MIN to compare with all elements in the array , as INT_MIN indiates as lowest possible value.
    for(int i=0;i<size;i++){
        if(arr[i]> biggest){ //comparing with the smallest possible value and if the condition is true ,then update the smallest variable value.
            biggest=arr[i];
        }
    }
    cout<<"Smallest value in the array is: "<<smallest<<endl;
    cout<<"Biggest value in the array is: "<<biggest<<endl;

    return 0;
}