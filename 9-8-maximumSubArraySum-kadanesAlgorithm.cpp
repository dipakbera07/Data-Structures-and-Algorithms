#include<iostream>
using namespace std;

int main(){
    int arr[]={2,3,-4,7,-1,9};
    int size=6;
    int maxEle=INT_MIN;
    int currentSum=0;
    for(int i=0;i<size;i++){
        currentSum +=arr[i];
        maxEle = max(maxEle,currentSum);
        if(currentSum<0){
            currentSum=0;
        }
    }
    cout<<"Maximum value of subArray sum: "<<maxEle<<endl;
    return 0;
}