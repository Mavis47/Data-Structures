#include <iostream>
#include <vector>
using namespace std;

int Majority_Element(vector<int> &nums){
    int n = nums.size();
    for(int val=0;val<n;val++){
        int freq = 0;
        for(int el=0;el<n;el++){
            if(nums[val] == nums[el]){
                freq++;
            }
        }
        if(freq > n/2){
            return nums[val];
        }
    }
    return -1;
}

int main(){
   vector<int> vec = {1,2,2,2,2,1};
   cout<<Majority_Element(vec);
}