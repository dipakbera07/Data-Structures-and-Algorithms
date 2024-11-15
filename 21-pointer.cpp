#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;  // * -> pointer that stores the address of variable a | & -> address of operator , refers the address of the variable.
    cout<<ptr<<endl;
    
    // Pointer to Pointer
    int** ptr2 = &ptr;
    cout<<ptr2<<endl;

    // Derefrence Operator | * -> Derefrence operator
    cout<<*(ptr2)<<endl; //here we get the value which is inside of ptr2 = the address of ptr.
    cout<<ptr<<endl;

    // Dereferance dereferance operator
    cout<<**(ptr2)<<endl; // here we get the value inside ptr2 -> ptr -> value of a(10)

    // NULL Pointer
    int *ptr3 = NULL; 
    cout<<ptr3<<endl;
    // cout<<*(ptr3);  //this will through an segmentation error , cause we want to access a memory that is not allowed.


    //PRACTICE QUESTIONS
    int x= 5;
    int *p = &x;
    int **q = &p;
    cout<<*p<<endl;
    cout<<**q<<endl;
    cout<<*q<<endl;
    cout<<p<<endl;


    return 0;
}