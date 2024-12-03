#include<iostream>
using namespace std;

bool isAlphanumaric(char ch){
    return iswalnum(ch);
}

bool palindrom(string s){
    int st = 0 , end = s.size()-1 ;
    while(st<end){
        if(isAlphanumaric(!s[st])){
            st++; continue;
        }
        if(!isAlphanumaric(s[end])){
            end--; continue;
        }
        if(tolower(s[st])!=tolower(s[end])){
            return false;
        }
        st++;
        end--;
    }
    return true;
}

int main(){
    string s = "aba";
    if(palindrom(s)){
        cout<<"It is Palindrom"<<endl;
    }
    else cout<<"It is not palindrome"<<endl;
    return 0;
}