#include<iostream>
#include<stack>
using namespace std;
//stack follows LIFO -> last in first out
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    cout<<"STATUS: "<<s.empty()<<endl; //check that stack empty or not 

    stack<int>s2;
    s2.swap(s); //this will swap all elements from s -> s2 
    cout<<"Size of s: "<<s.size()<<endl;
    cout<<"Size of s2: "<<s2.size()<<endl;
    return 0;
}