#include<iostream>
#include<map>
using namespace std;

int main(){
    multimap<string,int> m; //by using multi map we can store multiple keys with same name , as we can see below ,, if we write the same thing in normal map it will delete all except one .
    m.emplace("tv",100);
    m.emplace("tv",200);
    m.emplace("tv",300);
    m.emplace("tv",400);
    m.emplace("tv",500);
    m.emplace("tv2",600);
    m.erase(m.find("tv")); //it will erase first key value pair named tv
    // m.erase("tv"); //it will erase all key value pair named tv in m multiMap
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }


    return 0;
}