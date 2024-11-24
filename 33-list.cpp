#include<iostream>
#include<vector>
#include<list>  //list is like a Doubly linkedList 
using namespace std;

int main(){
    list<int>l;
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_front(5);
    l.push_front(6); //at the end what we pushed using push_front it appear first in the list . 

    l.pop_back(); //we are deleting the element that was pushed at the back at last.
    l.pop_front(); //we are deleting the element that was pushed at the front at last.
    for(int i:l){
        cout<<i<<endl;
    }

    // we have all functions same as vector , but it also have some extra functions using front as it act like a doubly linkedList . 


    return 0;
}