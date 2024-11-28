#include<iostream>
#include<map>
#include<set>
#include <unordered_set>
using namespace std;

int main(){
    set<int> m; 
    m.insert(100);
    m.insert(100);// set does not store duplicate elements .
    m.insert(200); 
    m.insert(300);
    m.emplace(400);
    m.emplace(500);

    m.erase(200);
    for(auto i:m){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<m.size()<<endl;
    cout<<m.count(100)<<endl;
    cout<<*(m.lower_bound(302)); //lower bound returns the value that we pass if it is in the set , if not then it returns the just bigget element .if just bigger element is not present in the set, means it is the biggest element  then it will return 0 .
    cout<<endl;

    // MULTISET 
    multiset<int> m2; //it stores duplicate value , also it stores value in asending order .
    m2.insert(2);
    m2.insert(2);
    m2.insert(2);
    m2.insert(5);
    m2.insert(1);
    m2.insert(7);
    cout<<"MULTISET : "<<endl;
    for(auto i:m2){
        cout<<i<<" ";
    }


    // UNORDERED_SET 
    unordered_set<int> m3; //it does't stores duplicate value , also it stores value in random order .
    m3.insert(2);
    m3.insert(2);
    m3.insert(2);
    m3.insert(5);
    m3.insert(1);
    m3.insert(7);
    cout<<"UNORDERED_SET : "<<endl;
    for(auto i:m3){
        cout<<i<<" ";
    }



    return 0;
}