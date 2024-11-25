#include<iostream>
#include<queue>
using namespace std;

int main(){
    // queue follows FIFO -> first in first out 
    queue<int>q;
    q.push(1); 
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }

    cout<<"STATUS: "<<q.empty()<<endl; //check that stack empty or not 

   
    return 0;
}