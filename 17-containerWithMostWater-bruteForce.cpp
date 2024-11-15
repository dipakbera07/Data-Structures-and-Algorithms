#include<iostream>
using namespace std;

int mostWater(vector<int>height){
    int maximumWater = 0;
    for (int i = 0; i < height.size(); i++){
        for(int j=i+1;j<height.size();j++){
            int width = j - i ;
            int at = min (height[i] , height[j]);
            int area = at * width ;
            maximumWater = max(maximumWater,area);
        }
    }
    return maximumWater;
}

int main(){
    vector<int>height={1,8,6,2,5,4,8,3,7};
    cout<<mostWater(height);
    return 0;
}