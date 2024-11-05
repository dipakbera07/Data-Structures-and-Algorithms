#include<iostream>
using namespace std;

int main(){

    //------------ BASIC STRUCTURE OF A SUBARRAY -----------
    // int arr[7]={2,3,4,5,6,7,8};
    // int size=7;
    // for(int st=0;st<size;st++){
    //     for(int end=st;end<size;end++){
    //         for(int i=st;i<=end;i++){
    //             cout<<arr[i];
    //         }
    //         cout<<" ";
    //     }
    // cout<<endl;
    // }

    //------------ MAX ELEMENT OF A SUBARRAY --------------
    int arr[5]={1,2,3,4,5};
    int size=5;
    int maxElement=INT_MIN;
    for(int st=0;st<size;st++){
        int currentSum=0;
        for(int end=st;end<size;end++){
            currentSum += arr[end];
            maxElement=max(currentSum,maxElement);
        }
    }
    cout<<"Maximum value of subArray sum: "<<maxElement<<endl;

    return 0;
}