#include <iostream>
#include <vector>
using namespace std;

void Subarray_sum_zero(vector<int> &nums){
    int n = nums.size();
    for(int st=0;st<n;st++){
        int currSum=0;
        for(int end=st;end<n;end++){
            currSum += nums[end];
            if(currSum == 0){
                cout<<"Subarray sum is zero for the elements"<<endl;
                for(int i=st;i<=end;i++){
                    cout<<nums[i]<<" ";
                }
                cout<<endl;
            }
        }
    }
}

int main(){
    vector<int> vec = {1,2,-3,4,2,6,7};
    Subarray_sum_zero(vec);
    return 0;
}