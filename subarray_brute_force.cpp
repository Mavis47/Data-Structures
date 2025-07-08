#include <stdio.h>
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Brute force approach to print subarray

int subarray(vector<int> &nums){
    int n = nums.size();
    int maxSum = INT_MIN;
    for(int st=0;st<n;st++){
        int currentSum=0;
        for(int end=0;end<n;end++){
            currentSum += nums[end];
            maxSum = max(maxSum,currentSum);
        }
    }
    return maxSum;
}

int main()
{
    cout<<"Subarray"<<"\n";
    vector<int> vec = {5,4,-1,7,8};
    cout<<subarray(vec);
    
    return 0;
}