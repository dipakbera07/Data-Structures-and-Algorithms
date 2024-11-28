#include<iostream>
using namespace std;

int main(){
    string s = "abc";
    next_permutation(s.begin(),s.end()); //it return the next permutation , laxicographically.
    cout<<"Next permutation of abc: "<<s<<endl;
    string s2 = "acb";
    prev_permutation(s2.begin(),s2.end());
    cout<<"Previous permutation of acb: "<<s2<<endl;
    return 0;
}