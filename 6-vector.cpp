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
    cout<<"first element = "<<vec8.front()<<endl;

    //--- back ---(Print the end or last value of vector)
    vector<int>vec9={2,3,4,5};
    cout<<"printing last value from the vector"<<endl;
    cout<<"last element = "<<vec9.back()<<endl;;

    //--- at ---(it displayes the target index value)
    vector<int>vec10={2,3,4,5};
    cout<<"printing selected index value: "<<endl;
    cout<<vec10.at(2)<<endl;; //it prints the selected index value like vec10[2].

    //---- erase ------(it erase element as we want)
    vector<int>vec11={1,2,3,4,5};
    vec11.erase(vec11.begin()+2); //it erase the element at index 2 , begin() -> is an itarator that points to the first element in the vector.
    for(int i : vec11){
        cout<<i<<endl;
    }
    //--- erase element between an range ------
    cout<<"Here we are deleting elements between an range: "<<endl;
    vector<int>vec12={2,3,4,5,6};
    vec12.erase(vec12.begin(),vec12.begin()+3); //here the ragne is from 0 -> 2 index value means 3rd index value will not be deleted .
    for(int i:vec12){
        cout<<i<<endl;
    }

    //---- insert (insert element at index value) -----
    cout<<"Inserting element at index: "<<endl;
    vector<int>vec13={1,2,3,4,5,6};
    vec13.insert(vec13.begin()+2,200); //it will insert element 200 at index 2 .
    for(int i:vec13){
        cout<<i<<endl;
    }
    //---- clear (clear all elements from vector) -----
    cout<<"Clearing all elements from vector: "<<endl;
    vector<int>vec14={1,2,3,4,5,6};
    vec14.clear(); //it will clear the whole vector , but the capacity of the vector remains same .
    for(int i:vec14){
        cout<<i<<endl;
    }

    //----- Vector Itarators - [ begin() , end() ]
    cout<<"Itarators:  "<<endl;
    vector<int>vec15={1,2,3,4,5,6};
    cout<<*(vec15.begin())<<endl; //it will will give us first element from the vector.
    cout<<*(vec15.end())<<endl; //it will not gives us the arrays last element , it actually pointing at the next index of end element , so it gives us an garbage value .      


    //---- Iterators ( customized ) | Forward Iterator --------
    cout<<"Vector Customized Iterators | forward: "<<endl;
    vector<int>vec16={1,2,3,4,5};
    vector<int>::iterator it; //here we just create our Forward iterator which has type of vector<int> . to create an forward iterator we have to use " vector< dataType >iterator nameOfIterator "

//by using our own iterators we can simply access the direact memory locations . 
    for(it = vec16.begin();it<vec16.end();it++){  //Forward Traversal
        cout<<*(it)<<endl; 
    }


    //---- Iterators ( customized ) | Reverse Iterator --------
    cout<<"Vector Customized Iterators | backward: "<<endl;
    vector<int>vec17={1,2,3,4,5};
    vector<int>::reverse_iterator it2; //here we just create our reverse iterator which has type of vector<int> . to create an reverse iterator we have to use " vector< dataType >iterator nameOfIterator "

    for(it2 = vec17.rbegin();it2<vec17.rend();it2++){ // rbegin -> it indicates the end element    ,rend -> it indites the previous memory location  of 0th index value .
        cout<<*(it2)<<endl; 
    }

    /*
    // Another way to create iterators -> 
    for(vector<int>::reverse_iterator it2 = vec17.rbegin();it2<vec17.rend();it2++){  
        cout<<*(it2)<<endl; 
    }
    
    //instead of writing these bigger loop , we can simply use " auto " keyword in return type 
    compilar will automatically get the type .

    for(auto it2 = vec17.rbegin();it2<vec17.rend();it2++){  
        cout<<*(it2)<<endl; 
    }
    */

    


    
    return 0;
}