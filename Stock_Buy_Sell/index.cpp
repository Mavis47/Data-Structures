#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int stock_buy_max(vector<int> &nums){
    int maxProfit = 0;
    int BestBuy = nums[0];
    for(int i=1;i<nums.size();i++){
        if(nums[i] > BestBuy){
            maxProfit = max(maxProfit,nums[i] - BestBuy);
        }
        BestBuy = min(BestBuy,nums[i]);
    }
    return maxProfit;
}

int main(){
    vector<int> vec = {7,9,3,5,4,12};
    cout<<stock_buy_max(vec);
}