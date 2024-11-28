#include<iostream>
#include<map>
using namespace std;

int main(){
    unordered_map<string,int> m; //by using multi map we can store multiple keys with same name , as we can see below ,, if we write the same thing in normal map it will delete all except one .
    m.emplace("tv",100);
    m.emplace("tv2",200);
    m.emplace("tv3",300);
    m.emplace("tv4",400);
    m.emplace("tv5",500);
    m["watch"]=20;
    m["watch"]=200;
   
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }


    return 0;
}