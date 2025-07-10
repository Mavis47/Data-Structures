#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int subarray_product(vector<int> &nums){
    int currProduct = 1,maxProduct = INT_MIN;
    for(int i=0;i<nums.size();i++){
        currProduct *= nums[i];
        maxProduct = max(maxProduct,currProduct);
        if(currProduct == 0){
            currProduct = 1;
        }
    }
    currProduct = 1;
    for(int i=nums.size() - 1;i>=0;i--){
        currProduct *= nums[i];
        maxProduct = max(maxProduct,currProduct);
        if(currProduct == 0){
            currProduct = 1;
        }
    }
    return maxProduct;
}

int main(){
    vector<int> vec = {3,-1,4};
    cout<<subarray_product(vec);
    return 0;
}