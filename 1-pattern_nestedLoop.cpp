#include<iostream>
using namespace std;

int main(){
    
    // // ----------------- PATTERNS USING NUMBERS ------------
    // 12345
    // 12345
    // 12345
    // 12345
    // 12345
    
    // int n=5;
    // for(int i=1;i<=n;i++){ //outer loop              
    //     for(int j=1;j<=n;j++){ //inner loop
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    
    
    
    //------------------ PATTERNS USING STARS --------------------
    // * * * * 
    // * * * * 
    // * * * * 
    // * * * * 
    
    // int n=4;
    // for(int i=1;i<=n;i++){ //outer loop
    //     for(int j=0;j<n;j++){ //inner
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    

    // -------------------- PATTERNS USING CHARACTERS -------------------
    // A B C D E 
    // A B C D E 
    // A B C D E 
    // A B C D E 
    // A B C D E 

    // int n=5;
    // for(int i=1;i<=n;i++){ //outer loop
    //     char ch='A'; //declared the first character that has to to be printed, after that in the inner loop we can increase the character value like B,C,D,E
    //     for(int j=1;j<=n;j++){ //inner loop
    //         cout<<ch<<" ";
    //         ch=ch+1;
    //     }
    //     cout<<endl;
    // }
    
    

    // // --------------- PATTERNS USING NUMBERS(INCREASING) ----------------------
    // 1234
    // 5678
    // 9101112
    // 13141516

    // int n=4;
    // int count =1; //define the starting value of coundown as the pattern is just a increasing numbers
    // for(int i=1;i<=n;i++){ //outer loop
    //     for(int j=1;j<=n;j++){ //inner loop
    //         cout<<count; //here we are printing the value of count that was initially set as 1 , after that it was increasing sequentially. as we want to create a pattern where numbers are increasing . 
    //         count =count+1; //here we are increasing the count value , by adding 1 .
    //     }
    //     cout<<endl;
    // }


    // --------------------- PATTERNS USING CHARACTERS (INCREASING) --------------------
    // ABCD
    // EFGH
    // IJKL
    // MNOP

    // int n=4;
    // char ch='A'; //define the starting value of coundown as the pattern is just a increasing characters
    // for(int i=1;i<=n;i++){ //outer loop
    //     for(int j=1;j<=n;j++){ //inner loop
    //         cout<<ch; //here we are printing the value of ch that was initially set as 'A' , after that it was increasing sequentially. as we want to create a pattern where characters are increasing . 
    //         ch++; //here we are increasing the ch value , by adding 1 .
    //     }
    //     cout<<endl;
    // }


    //------------------- TRIANGLE PATTERN USING STAR IN INCRREASING ORDER -----------------------
    // * 
    // * * 
    // * * * 
    // * * * * 
    // * * * * *
    
    // int n=5;
    // for(int i=0;i<n;i++){ //OUTER LOOP
    //     for(int j=0;j<i+1;j++){ //here we are giving condition to print number of stars in which row of line the code is executing . if it is on 2nd line it means we are giving condition where j<i+1 , here i is probably 1 it means j<2 , so the inner loop starts from index 0 as we intialize it until j<2 . it means it print 2 stars
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }



    //------------- TRIANGLE PATTERNS USING NUMBERS (SAME NUMBERS IN INNER LOOP) IN INCREASING ORDER ----------------
    // 1
    // 22
    // 333
    // 4444

    // int n=4;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<i+1;j++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }



    //--------------------------- TRIANGLE PATTERN USING CHARACTERS -----------------------------
    // A
    // BB
    // CCC
    // DDDD
    // int n=4;
    // char ch='A';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<ch;
    //     }
    //     ch++;
    //     cout<<endl;
    // }



    //------------------------------ TRIANGLE PATTERN USING NUMBERS ------------------------------
    // 1
    // 12
    // 123
    // 1234
    // 12345

    // int n=5;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<i+1;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }


    //-------------------- REVERSE TRIANGLE PATTERN  --------------------
    // 1
    // 21
    // 321
    // 4321

    // int n=4;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j>0;j--){
    //         cout<<j;       
    //     }
    //     cout<<endl;
    // }

    //-------------- FLOYDS TRIANGLE PATTERNS ----------
    // 1
    // 23
    // 456
    // 78910

    // int n=4;
    // int count=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<count;
    //         count++;
    //     }
    //     cout<<endl;
    // }



    //----------------- FLOYDS TRIANGLE PATTERN USING CHARACTERS -------------------
    // A
    // BC
    // DEF
    // GHIJ

    // int n=4;
    // char ch='A';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<ch;
    //         ch++;
    //     }
    //     cout<<endl;
    // }
    

    //---------------------- REVERSE TRIANGLE PATERN USING CHARACTER -------------
    // A
    // BA
    // CBA
    // DCBA

    // int n=4;
    // for(int i=0;i<n;i++){
    //     char ch='A'+i;
    //     for(int j=i;j>=0;j--){
    //         cout<<ch;
    //         ch--;
    //     }
    //     cout<<endl;
    // }


    //------------- INVERTED TRIANGLE PATTERN USING NUMBERS ------------------
    // 1111
    //  222
    //   33
    //    4

    // int n=4;
    // for(int i=0;i<n;i++){
    //     for(int k=0;k<i;k++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<n-i;j++){
    //         cout<<i+1;
    //     }
    //     cout<<endl;
    // }


    //------------- INVERTED TRIANGLE PATTERN USING CHARACTER ------------------
    // AAAA
    //  BBB
    //   CC
    //    D

    // int n=4;
    // for(int i=0;i<n;i++){
    // char ch='A'+i;
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<n-i;j++){
    //         cout<<ch;
    //     }
    //     cout<<endl;
    // }


    //------------ PYRAMID PATTERN --------------
    //    1
    //   121
    //  12312
    // 1234123

    int n=4;
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<j+1;
        }
        for(int j=i;j>0;j--){
            cout<<j;
        
        }
        cout<<endl;
    }

    return 0;
}