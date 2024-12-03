#include<iostream>
using namespace std;

bool isPalindrom(string s){
    string old_str=s;
    reverse(s.begin(),s.end());
    return old_str==s;
}

int main(){
    string s ="abc";
    if(isPalindrom(s)){
        cout<<"It is a palindrom"<<endl;
    }
    else cout<<"It is not an palindrom"<<endl;
    
    return 0;
}