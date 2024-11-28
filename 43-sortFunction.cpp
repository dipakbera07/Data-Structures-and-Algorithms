#include <iostream>
#include <vector>
using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2){// here we created a customized functio to sort our vector of pairs based on the second value in pair in asending order.
    if(p1.second<p2.second) return true;    
    if(p1.second>p2.second) return false;
                                                //here we specified 3 condtion - first 2 condtion check that if pairs second element is in sorted order  then true other wise false , and the third condtion is going to be checked when pairs second element is same not less or greater , then we are going to make the sorting based on first element in the pairs .
    if(p1.first<p2.first) return true;
    else return false ;
}

int main()
{
    // sorting in vector --
    vector<int> n = {2, 5, 1, 9, 7, 5, 89};
    sort(n.begin(), n.end(), greater<int>()); // greater<int>  ----->  functot or comparator.
    // By using this functor we can reverse the order . it will print the vector in desending order.
    for (auto i : n)
    {
        cout << i << " ";
    }
    cout << endl;
    // sorting in an array --
    int arr[] = {2, 3, 34, 65, 4, 5};
    sort(arr, arr + 6);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    // sorting in vector-pair :
    vector<pair<int, int>> var = {{21, 2}, {3, 2},{8,1}, {52, 2},{9,3},{8,2}};
    sort(var.begin(), var.end(), comparator); // here we passsed our custom function to sort the vector based on the second value in pair.
    cout<<"Printing sorted pairs based on second element : "<<endl;
    for (auto i : var)
    {
        cout << i.first << " " << i.second << endl;
    }

    // Reverse function --
    vector<int>nums={2,3,4,5,6};
    reverse(nums.begin(),nums.end()); //reverse array
    // reverse(nums.begin()+1,nums.end()-2); //in this we can set an range for reversing elements .
    cout<<"Reverse array: " ;
    for(int i:nums){
        cout<<i<<" ";
    }

    return 0;
}