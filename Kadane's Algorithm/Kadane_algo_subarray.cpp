#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int kadaneAlgo(vector<int> &nums){
    int maxSum = INT_MIN,currSum=0;
    for(int val: nums){
        currSum += val;
        maxSum = max(maxSum,currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;
}

int main(){
    vector<int> vec = {3,-4,5,4,-1,7,-8};
    cout<<""<<kadaneAlgo(vec);
}