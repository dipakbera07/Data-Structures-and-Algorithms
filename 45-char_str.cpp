#include<iostream>
using namespace std;

int main(){
    char str1[]={'a','b','c'};
    cout<<str1; //it will print -  abc | char array gives an collab of every char in this array , when we want to print by the name of array .

    char str2[]="dipak"; //as we can see that we have 5 char in this array but when we use size as 5 inside[] then it will gives us an error . because we have an addition null char \n at the end . it will applied only when we are storing an string in an char array .
    cout<<"Length of str2: "<<strlen(str2)<<endl;; //by using strlen() we can get the size of string , as we used an string inside this array thats why we are ableto use this function .
    //getting individual access of char from this char array that have sring -
    cout<<"3rd element from str2 array: "<<str2[2]<<endl;


//here we have an example of using cin during taking input and storing it in a char array --
    // char str3[6];
    // cout<<"Enter for str3: ";
    // // cin>>str3;  // cin will only store elements in str3 until a space comes , if it get an space from user after that it does not store anything in the str3 array .
    // cout<<"str3 elements using cin : "<<str3<<endl;

// using cin.getline() during taking input from user --
    char str4[11]; 
    cout<<"Enter for str3 using cin.getlen : ";
    cin.getline(str4,11); 
    cout<<"str3 elements using cin.getlen() : "<<str4<<endl;

//use of delimiter cin.getline(name,len,delimiter) --
    char str5[6];
    cout<<"Enter for str5 : ";
    cin.getline(str5,6); //delimiter set that - as we mention that my delimiter is '$' so during input taking when we give '$' from that it does not store anything in the array . in simple words we can say , after giving an input when we press eneter then it stop taking input then the delimiter also do the same thing .  
    // cout<<"Here we have out str5 with delimiter : "<<str5;
    cout<<"CHARACTERS: ";
    for(char ch : str5){ // accessing individual caraters .
        cout<<ch<<" ";
    }
    cout<<endl;


//string input 
    string s;
    cout<<"Enter a string : ";
    // cin>>s;   //this line takes string input  , but when we enetr a space after that it stop storing it in variable . to solve this problem we have to use - getline(cin,s)
    getline(cin,s);
    cout<<s;
    return 0;
}