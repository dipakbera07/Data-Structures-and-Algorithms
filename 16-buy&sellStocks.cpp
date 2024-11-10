#include<iostream>
using namespace std;

int stocks(vector<int>prices){
    int maxProfit = 0 , bestBuy = prices[0];
    for(int i=0;i<prices.size();i++){
        if(prices[i]>bestBuy){
            maxProfit = max(maxProfit , prices[i]-bestBuy);
        }
        bestBuy = min(bestBuy , prices[i]);
    }
    return maxProfit;
}

int main(){
    vector<int>prices={7,1,2,3,6,5,23,8};
    cout<<stocks(prices);
    return 0;
}