#include<iostream>
using namespace std;

int singleElement(vector<int>nums){
    int n = nums.size();
    int min = 0 , max = n-1 ;
    while(min<=max){
        int mid = min + (max-min)/2;
        if(nums[mid-1] != nums[mid] && nums[mid] != nums[mid+1]){ //this condition checks that mid index value is not equel to mid-1 and  mid+1 . if it is true that means our mid value is our target value.
            return nums[mid];
        }
        if(mid%2==0){ //here we are checking that after getting the mid index , left and right part of the mid is even or not , it helps us to get single element .

            //if it is even we enter in this condition .
            if(nums[mid-1] == nums[mid]){ // here we compare our mid index value with previous index value , if both are same that means we enter in this condition.

                max = mid-1; //now we have a clear idea that our target is in the left side , so we are making the max as mid-1 to make the size of array half.
            }
            else{
                min = mid + 1; // if the first condition got false that means the dupliate element is in the right sight , so we are making the min as mid+1 to minimize the size of this array.
            }
        }
        else{  // this will run when the both side of array is odd 
            if(nums[mid-1]==nums[mid]){ //then it will check the same thing again , but now if the duplicate element if found at left sight it means our taget is in the right sight , cause as it is odd and we got our duplicate that means now the rest is even , so definately we dont have our target here ,
                min = mid+1; // so we are making the min as mid+1 as we are clear that our TARGET is in right sight .
            }
            else{ //it will run when the mid's duplicate is in the right sight . 
                max = mid - 1; 
            }
        }
    }
    return -1;
}

int main (){
    vector<int>nums={2,2,4,4,5,5,7,8,8,9,9};
    int ans = singleElement(nums);
    cout<<"Single element: "<<ans<<endl;
    return 0;
}