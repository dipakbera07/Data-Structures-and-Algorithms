#include<iostream>
using namespace std;

bool checkPermutations(string s1,string s2){
    sort(s2.begin(),s2.end());
    do{
        if(s1.find(s2)<s1.size()){
            return true;
        }
    }while(next_permutation(s2.begin(),s2.end()));
    return false;
}

int main(){
    string s = "eidbaooo";
    string sub = "ab";
    cout<<checkPermutations(s,sub);
    return 0;
}