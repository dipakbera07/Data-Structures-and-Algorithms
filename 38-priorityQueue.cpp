#include<iostream>
#include<vector>
using namespace std;

int main(){
    priority_queue<int> q; //inside priority queue all elements are arrenged based on their priority.
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(6);
    q.push(5);
    while(!q.empty()){
        cout<<q.top()<<" "; //it will print decending order value
        q.pop();
    }
    cout<<endl;

    priority_queue<int,vector<int>,greater<int>> p; //greater<int>  -> functot or comparator , it is used to chsnge the defult setting , means in default one values stored in desending order , by using this we can change that .
    p.push(2);
    p.push(20);
    p.push(13);
    p.push(9);
    p.push(28);
    p.push(21);
    cout<<"Priority queue using functors: ";
    while(!p.empty()){
        cout<<p.top()<<" "; //it will print decending order value
        p.pop();
    }
    return 0;
}