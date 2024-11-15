#include<iostream>
using namespace std;

int main (){

    int arr[]={2,3,4,5,6};

    cout<<*(arr+0)<<endl; //we can access different arr values.
    cout<<*(arr+1)<<endl; //we can access different arr values.
    cout<<*(arr+2)<<endl; //we can access different arr values.
    cout<<*(arr+3)<<endl; //we can access different arr values.
    cout<<*(arr+4)<<endl; //we can access different arr values.


    //-------- INCREASING THE POINTER ADDRESS AS WE WANT ----------
    // int a=10;
    // int* ptr=&a;
    // ptr +=2; //we can also increase the ptr address as we want , it will add 8 bits in the address .
    // cout<<ptr<<endl;

    //-------- INCREASING THE POINTER by 4 bit (as it is integer) ----------
    // int a=10;
    // int* ptr=&a;
    // ptr++; //it will increment the pointers value by 4 bit as it is a integer type pointer.
    // ptr--; //it will dicrement the pointers value by 4 bit as it is a integer type pointer.
    // cout<<ptr<<endl;


    // int arr[]={1,2,3,4,5};
    // int a=5;
    // arr=&a; //it throughs error because the array pointer can not be changed .
    // cout<<*arr<<endl;


    // int a=10, b=20;
    // int* ptr=&a;
    // ptr=&b; // now pointer stores the address of b;
    // cout<<ptr;

    return 0;
}