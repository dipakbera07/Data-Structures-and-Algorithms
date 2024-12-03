#include<iostream>
using namespace std;

void removeOccurence(string &s, string &sub){
    while(s.size() > 0 && s.find(sub)<s.size()){
        s.erase(s.find(sub),sub.length());
    }
}

int main(){
    string s = "abchsgabcuhdabc";
    string sub = "abc";
    removeOccurence(s,sub);
    cout<<"RESULT: "<<s<<endl;
    return 0;
}
