#include<iostream>
//to use pair we dont have to use any extra header file .
using namespace std;

int main(){
    // This is a normal pair --
    pair<int , int> p={1,2};
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    // pair of pair -- 
    pair<int, pair<char, int>>q={1,{'L',2}};
    cout<<q.first<<endl; 
    cout<<q.second.first<<endl;
    cout<<q.second.second<<endl;

    return 0;
}