#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(4);
    vec.push_back(4);
    cout<<"Size = "<<vec.size()<<endl;
    cout<<"Capacity = "<<vec.capacity()<<endl;
    return 0;
}