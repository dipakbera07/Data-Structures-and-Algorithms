#include<iostream>
#include<deque>
#include<vector>
using namespace std;

int main(){
    //deque is internally implimented as dinamic array , also it allows random memory acces 
    deque<int>d={1,2,3,4,5};
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<d[2];
    return 0;
}