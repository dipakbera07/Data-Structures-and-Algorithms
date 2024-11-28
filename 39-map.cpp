#include<iostream>
#include<map>
using namespace std;

int main(){
    //map will sort data byDefault in asending order .
    map<string,int>m; //it will store key and value pair, where key should be unique .
    m["tshirt"]=300; //it will isert new value , change existing value .
    m["shirt"]=500;
    m["jeans"]=1000;
    m["tablet"]=10000;
    m["watch"]=200;
    m.insert({"camera",20000}); //by using this we are inserting a new pair into the map .
    m.erase("tshirt");  //it will erase the whole key value pair which has key tshirt
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"COUNT: "<<m.count("watch")<<endl; //it will return the total count of given key present in the map . it does not return the value of count .
    if(m.find("watch") != m.end()){ //we are usig this to check a key value is present or not in the map. 
        cout<<"FOUND "<<endl;
    }
    else{
        cout<<"NOT FOUND !"<<endl;
    }
    return 0;

}