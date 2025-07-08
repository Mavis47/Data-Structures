#include <iostream>
#include <vector>
using namespace std;

void CountPositiveNumber(vector<int> &nums){
    int count = 0;
    int n = nums.size();
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            bool isPositive = true;
            for(int i=st;i<=end;i++){
                if(nums[i] < 0){
                    isPositive = false;
                    break;
                }
            }
            if(isPositive){
                count++;
                cout<<"Positive Subarray are :- ";
                for(int i=st;i<=end;i++){
                    cout<<nums[i]<<" ";
                }
                cout<<endl;
            }
        }
    }
}

int main(){
    vector<int> vec = {-2,4,5};
    CountPositiveNumber(vec);
}