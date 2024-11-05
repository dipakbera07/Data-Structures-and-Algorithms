#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    cout<<"Size = "<<vec.size()<<endl;
    cout<<"Capacity = "<<vec.capacity()<<endl; //everytime capacity is going to be doube when there is not enough space to acquire the element.
    //in vector when we want to push an element , if there is not enough capacity the vector make the size of the vector double to aquire the element in the vector, as we can see that at first the vector is empty then we pushed 1 element , after that when we are pushing second element it has no capacity , then it make the capacity of vector double means 2 , then when are pushing 3rd element it has no capacity so it makes the capacity double means 4 after it means at that point the capacity of the vector is 4 but the size is 3 .
    return 0;
}