#include<iostream>
#include<vector> //this header file helps to include librarys that allows us to use vector .
using namespace std;

int main(){
    // // ------------ Different way to declare vectors -------------

    // vector<int>vec1; //basic syntax to create a vector. It is an empty vector it means it has no elements . here vec1 is the name of our vector it can be anything.

    // vector<int>vec2={2,3,4,5,6,7}; //here we initialize some elements in our vector.
    // for(int i:vec2){ // This is called for each loop , this is used to access all elements of our vector we use for loop but , in vector the for loop works differently , means here the value of 'i' is not index value , it specifies the actual value of vector .like the fist i value is 2, then 3, then 4 and go on as the vector elements.
    //     cout<<i<<endl; //as we can see that here when we are printing the i it is printing the index value , it is printing the actual values of vactor.
    // }

    // vector<int>vec3(5,3); //this is another way to declare an vector , here 5 indicates the size of the vector and the 3 indicates the elements means all elements in this vector is 3 and the total size of this vector
    // cout<<vec3[1]<<endl;
    // cout<<vec3[2]<<endl;
    // cout<<vec3[3]<<endl;
    // cout<<vec3[4]<<endl;
    // cout<<"Using loop"<<endl;
    // for(int i:vec3){
    //     cout<<i<<endl;
    // }


    //-------------- Different Functions in vector -------------

    //--- size --- (we can get the size of an vector)
    // vector<int>vec4={2,3,4,5,6,7};
    // cout<<vec4.size(); //by using vector_name.size() we can find the size of an vector.

    //---push_back ---(pushing elements at the end of the vector)
    vector<int>vec5; //this is an empty vector
    cout<<"Pushing element in a empty vector"<<endl;
    vec5.push_back(3); //here pushed element 3 at the end of the vector , as the vector has no elements so it is the first element.
    cout<<vec5[0]<<endl;;
    vector<int>vec6={2,3,4,5};
    cout<<"Pushing element in a filled vector"<<endl;
    vec6.push_back(6);
    for(int i:vec6){
        cout<<i<<endl;
    }

    //--- pop_back ---(deleting elements at the end of the vector)
    vector<int>vec7={2,3,4,5};
    cout<<"deleting element from the vector"<<endl;
    vec7.pop_back();
    for(int i:vec7){
        cout<<i<<endl;
    }

    //--- front ---(Print the front of first value of vector)
    vector<int>vec8={2,3,4,5};
    cout<<"printing first value from the vector"<<endl;
    cout<<"first element = "<<vec8.front()<<endl;;

    //--- back ---(Print the end or last value of vector)
    vector<int>vec9={2,3,4,5};
    cout<<"printing last value from the vector"<<endl;
    cout<<"last element = "<<vec9.back();

    //--- at ---(it displayes the target index value)
    vector<int>vec10={2,3,4,5};
    cout<<"printing selected index value"<<endl;
    cout<<vec10.at(2); //it prints the selected index value like vec10[2].


    
    return 0;
}