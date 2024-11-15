#include <iostream>
using namespace std;

// ------------- PASS BY VALUE ----------

// void change(int n){
//     n=20;
// }
// int main(){
//     int a=10;
//     change(a);
//     cout<<a; //it does not update the value of a , cause it makes a clone this variable in that function which doesnot affect the actual variable.
//     return 0;
// }


// -------- PASS BY REFRENCE --------

// void change(int *n)
// {
//     *n = 20;
// }
// int main()
// {
//     int a = 10;
//     change(&a);
//     cout << a; //it will update the value by 20 .
//     return 0;
// }

//----------- PASS BY REFRENCE USING ALIAS ---------

void change(int &n) //HERE THE & refers to the sign of alias .
{
    n = 20;
}
int main()
{
    int a = 10;
    change(a);
    cout << a; //it will update the value by 20 .
    return 0;
}
